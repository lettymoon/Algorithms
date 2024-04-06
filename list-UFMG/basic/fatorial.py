# Fatorial - Neps Academy

n =  int(input())
if(n == 0):
    print(1)

fat = 1
for i in range(n):
    fat *= i+1
print(fat)