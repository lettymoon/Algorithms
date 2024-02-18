# 9. Palindrome Number

def is_palindrome(num):
    original_num = num
    reversed_num = 0

    while num > 0:
        remainder = num % 10
        print(remainder)
        reversed_num = reversed_num * 10 + remainder
        print(reversed_num)
        num = num // 10
        print(num)

    return original_num == reversed_num

# Teste o código
print(is_palindrome(121))  # Deveria retornar True