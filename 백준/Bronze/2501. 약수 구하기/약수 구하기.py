n, k = map(int, input().split())
divisor = []

# 밑에서 range의 범위를 for i in range(n)이라고 잡으면 i=0일때 n%i에서 오류발생
for i in range(1, n+1):
    if (n%i == 0):
        divisor.append(i)

if len(divisor) < k:
    print("0")
else:
    print(divisor[k-1])