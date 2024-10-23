import math

a = int(input("Nilai batas awal: "))
b = int(input("Nilai batas akhir: "))
n = int(input("Interval bagi: "))

h = (b-a)/n
print(h)

y = None
result_x = 0


def f(x):
    return x + math.exp(x)

for i in range(n):
    xn = a + i*h
    z = f(xn)
    print(z)

    if y is None or abs(z) < abs(y) or (abs(z) == abs(y) and z > y):
        y = z
        result_x = xn


print("Nilai x: ", result_x)
print("Nilai y: ", y)
