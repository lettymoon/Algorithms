t = int(input())

for _ in range(t):
    s = input()

    char_s = [chr(ord(char) + 3) if char.isalpha() else char for char in s]
    s_modificada = ''.join(char_s)

    s_invertida = s_modificada[::-1]

    meio_s = len(s_invertida) // 2
    char_s_criptado = [chr(ord(s_invertida[i]) - 1) if i >= meio_s else s_invertida[i] for i in range(len(s_invertida))]
    s_criptada = ''.join(char_s_criptado)

    print(s_criptada)