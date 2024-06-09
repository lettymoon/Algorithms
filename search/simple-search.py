# busca simples
def search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = left
        if arr[mid] == target:
            return mid
        else:
            left+=1
    return None

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print(search(arr, 3))