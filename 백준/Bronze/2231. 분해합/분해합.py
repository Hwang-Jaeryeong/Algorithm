# n = M + 각자리수의 합
# n의 가장 작은 M 구하기


n = int(input())

def calculate_sum(a):
    num = [int(i) for i in str(a)]
    return sum(num)

sol = 0
for i in range(n):
    if i + calculate_sum(i) == n:
        sol = i
        break



print(sol)