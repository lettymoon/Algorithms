my_list = [0] * 10

n = int(input())
my_list[0] = n
print("N[0] =", n)

for i in range(1, 10):
    my_list[i] = my_list[i-1] * 2
    print("N[{}] = {}".format(i, my_list[i]))