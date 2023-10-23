num = int(input())
a = []

for i in range(num):
    f = int(input())
    a.append(f)

a.sort()
result = '\n'.join(map(str, a))  # 정렬된 리스트를 문자열로 변환하여 출력할 문자열에 할당합니다.
print(result)