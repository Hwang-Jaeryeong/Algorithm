import sys
input=sys.stdin.readline

n,m = map(int,input().split())
nl={}
res=[]
cnt=0

for i in map(int,input().split()):
    nl[i]=1

for i in map(int,input().split()):
    if i in nl:
        cnt+=1

print(n+m-cnt*2)