input()
ndict={}

for i in map(int,input().split()):
    if i in ndict:
        ndict[i]=int(ndict[i])+1
    else:
        ndict[i]=1

input()
res=[]

for j in map(int,input().split()):
    if j in ndict:
        res.append(ndict[j])
    else:
        res.append(int(0))

print(*res)