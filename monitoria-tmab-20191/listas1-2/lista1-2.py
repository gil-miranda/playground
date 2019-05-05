import math

print('digite o n')
n = int(input())

print('digite o x')
x = int(input())

print('digite o y')
y = int(input())

xs = []
ys = []
for i in range(2,n):
    xs.append(i*x)
    ys.append(i*y)

print(xs)
print(ys)