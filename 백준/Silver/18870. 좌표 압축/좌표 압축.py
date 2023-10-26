import sys

input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

# set함수를 통해 중복을 없애주기
arr2 = sorted(list(set(arr))) # 999, 1000
dic = {arr2[i] : i for i in range(len(arr2))}
# ↑는 딕셔너리 컴프리헨션
# 구체적으로 arr2 리스트의 각 요소 arr2[i]를 키로 하고, 그 요소의 인덱스 i를 값으로 하는 딕셔너리를 생성
# 예를 들어, arr2 리스트가 [3, 1, 4]라고 가정하면 이 딕셔너리 컴프리헨션은 다음과 같은 딕셔너리를 생성
# {3: 0, 1: 1, 4: 2}
for i in arr:
    print(dic[i], end = ' ')