import math

termos = [0,0,0]
xs = [0,0]

print('Entre com o termo de x^2')
termos[0] = float(input())

print('Entre com o termo de x')
termos[1] = float(input())

print('Entre com o termo independente')
termos[2] = float(input())

d = termos[1]**2 - 4 * termos[0]*termos[2]

xs[0] = '{0:.2f}'.format((-termos[1] + math.sqrt(d))/2*termos[0])
xs[1] = '{0:.2f}'.format((-termos[1] - math.sqrt(d))/2*termos[0])

print('As raízes são: x1 = ' +str(xs[0]) + ', x2 = ' + str(xs[1]))