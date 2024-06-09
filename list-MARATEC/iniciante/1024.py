t = int(input())

for _ in range(t):
    s = input()

    # primeiro passo
    s_modificada = ""
    for char in s:
        if char.isalpha():
            s_modificada += chr(ord(char) + 3)
        else:
            s_modificada += char

    # segundo passo
    s_Invertida = s_modificada[::-1]

    # terceiro passo
    meio_s = len(s_Invertida) // 2
    s_criptada = ""
    for i in range(len(s_Invertida)):
        if i >= meio_s:
            s_criptada += chr(ord(s_Invertida[i]) - 1)
        else:
            s_criptada += s_Invertida[i]

    print(s_criptada)