a, b = [int(i) for i in input().split()]

snack = {1: 4, 2: 4.50, 3: 5, 4: 2, 5: 1.50}

selec = 0

for key, price in snack.items():
    if key == a:
        selec = price
        break

total = selec * b
print("Total: R$", "{:.2f}".format(total))
