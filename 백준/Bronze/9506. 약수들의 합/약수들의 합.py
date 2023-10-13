while(True):
    n = int(input())
    divisor = []
    if(n == -1):
        break
    for i in range(1, n):
        if(n%i == 0):
            divisor.append(i)
    add = 0
    if sum(divisor) == n:
        print(n, " = ", " + ".join(str(i) for i in divisor), sep="")
    else:
        print(n, "is NOT perfect.")