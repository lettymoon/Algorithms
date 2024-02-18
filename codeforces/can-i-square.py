t = int(input())

for _ in range(t):
    n = int(input())
    numbers = list(map(int, input().split()))
    summ = sum(numbers)
    sqrt = summ ** 0.5
    if sqrt == int(sqrt):
        print("YES")
    else:
        print("NO")
