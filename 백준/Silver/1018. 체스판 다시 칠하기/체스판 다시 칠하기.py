# 8*8로 잘라야 하기에, 행으로 i-7만큼, 열로 j-7만큼 고정시켜줘야 한다. 
# 고정시키고 난 이후는, i,j에서 i+8까지, j+8까지 전부 반복하면서 알맞게 체크무늬로 칠해져 있는지 확인한다.
# 흰색이 먼저인 경우와 검은색이 먼저있는 경우를 나누어서, 한번에 종합한 후
# min()을 사용하여, 최소값을 알아낸다.

N, M = map(int, input().split())
board = list()
for i in range(N):
    board.append(input())
repair = list()

for i in range(N-7):
    for j in range(M-7):
        first_W = 0
        first_B = 0
        for k in range(i,i+8):
            for l in range(j,j + 8):
                if (k + l) % 2 == 0: #짝수는 시작점과 색깔이 같아야되는 부분
                    if board[k][l] != 'W':
                        first_W += 1
                    if board[k][l] != 'B':
                        first_B += 1
                else:
                    if board[k][l] != 'B':
                        first_W += 1
                    if board[k][l] != 'W':
                        first_B += 1
        repair.append(first_W)
        repair.append(first_B)

print(min(repair))