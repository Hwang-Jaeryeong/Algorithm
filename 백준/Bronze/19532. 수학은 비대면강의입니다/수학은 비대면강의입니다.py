a, b, c, d, e, f = map(int, input().split())

x = (c*e-b*f)/(a*e-b*d)
y = ((c * d - f * a) / (b * d - e * a))

x = int(x)
y = int(y)
result = "{} {}".format(x, y)
print(result)