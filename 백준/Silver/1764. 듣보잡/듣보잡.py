import sys

n, m = map(int, sys.stdin.readline().split())

a = set()
for i in range(n):
    a.add(sys.stdin.readline().strip())

b = []
for i in range(m):
    x = sys.stdin.readline().strip()
    if x in a:
        b.append(x)

print(len(b))
b.sort()
print('\n'.join(b))