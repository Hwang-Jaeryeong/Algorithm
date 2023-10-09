n = int(input())
board = [[0] * 100 for i in range(100)]
count = 0

for _ in range(n):
    a, b = map(int, input().split())
    for j in range(b, b+10):
        for i in range(a, a+10):
            if board[j][i] == 0:
                board[j][i] = 1

for i in range(100):
    for j in range(100):
        if board[i][j] == 1:
            count += 1

print(count)