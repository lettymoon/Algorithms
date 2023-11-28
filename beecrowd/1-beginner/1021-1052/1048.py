# Challange 1048 - URI Online Judge

salario = float(input())

selec = 0
percentual = {(0.00, 400.00):0.15, 
              (400.1, 800.000):0.12, 
              (800.1, 1200.00): 0.10,
              (1200.00, 2000.00): 0.07,
              (2000.00, float('inf')):0.04}

for key, porc in percentual.items():
     if key[0] <= salario <= key[1]:
        selec = porc
        break

reajuste = salario * selec
newSalary = salario + reajuste
percentualUsado = selec * 100

print(f'Novo salario: {newSalary:.2f}')
print(f'Reajuste ganho: {reajuste:.2f}')
print(f'Em percentual: {percentualUsado:.0f}%')