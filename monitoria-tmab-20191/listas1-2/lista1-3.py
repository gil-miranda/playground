import math

print('quantas coordenadas terão os vetores?')
n = int(input())

u = []
v = []
w = []

for i in range(n):
    print('Digite a coordenada '+str(i)+' do vetor u')
    u.append(float(input()))
for i in range(n):
    print('Digite a coordenada '+str(i)+' do vetor v')
    v.append(float(input()))
    
for i in range(n):
    w.append(u[i]+v[i])
    
print(w)