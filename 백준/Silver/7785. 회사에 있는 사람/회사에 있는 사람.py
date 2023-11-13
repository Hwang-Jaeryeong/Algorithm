import sys

n = int(sys.stdin.readline())
dic = {}
for i in range(n):
    a = list(map(str, sys.stdin.readline().rstrip().split()))
    dic[a[0]] = a[1]
    if a[1]== 'leave':
        del(dic[a[0]])
# print(list(dic.keys()))
a = sorted(list(dic.keys()), reverse= True)
for i in a:
    print(i)