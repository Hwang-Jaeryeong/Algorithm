import sys
input = sys.stdin.readline

n, m = map(int, input().split())
cnt = 0
nl=[]
ml=[]

for i in range(n):
    nl.append(input().strip())
    
for i in range(m):
    ml.append(input().strip())

for i in ml:
    if i in nl:
        cnt+=1

print(cnt)