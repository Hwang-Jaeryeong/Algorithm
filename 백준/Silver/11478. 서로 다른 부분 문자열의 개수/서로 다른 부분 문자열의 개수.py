import sys
input=sys.stdin.readline

n = str(input().strip())
res = []
a = []

for i in n:
    res.append(i)
for j in range(len(n)):
    for i in range(len(n)-j):
        a.append("".join(res[i:i+j+1]))
print(len(set(a)))