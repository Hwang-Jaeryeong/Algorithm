sugar = int(input())
ans=-1
for i in range(int(sugar/5)+1):
    three = sugar-i*5
    if(three%3!=0):
        continue
    j = int(three/3)
    ans = i+j

print(ans)