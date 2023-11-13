import sys
N,M = map(int,input().split())
num_name,name_num = {},{}
for i in range(N):
    a = sys.stdin.readline().strip()
    num_name[i+1] = a
    name_num[a] = i+1
for i in range(M):
    a = sys.stdin.readline().strip()
    if  'A' <= a[0] <= 'z' :
        print(name_num[a])
    else : 
        print(num_name[int(a)])