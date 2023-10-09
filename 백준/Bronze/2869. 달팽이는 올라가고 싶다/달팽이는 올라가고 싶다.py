# 올라가야할 거리 = V - B
# 하루에 갈 수 있는 거리 = A - B

A, B, V = map(int, input().split())

if (V - B) % (A - B) == 0:
    print((V-B)//(A-B))
else:
    print((V-B)//(A-B)+1)