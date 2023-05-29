# Repositório dedicado a aprender Pascal

Este repositório contém soluções em Pascal para desafios de algoritmos encontrados na plataforma Beecrowd.

## Index

- [Repositório dedicado a aprender Pascal](#repositório-dedicado-a-aprender-pascal)
  - [Index](#index)
  - [Instalando](#instalando)
  - [Executando](#executando)
  - [Links Didáticos](#links-didáticos)

## Instalando

Antes de começar, garanta que você esta utilizando Linux ou o WSL (Windows Subsystem Linux for Windows)

Instale o G++ utilizando o comando `apt-get install fp-compiler`

Use `apt-get install fp-docs fpc lazarus` se quiser o pacote com a documentação.

Se estiver no Windows use o [Pzim](http://pascalzimbr.blogspot.com/p/blog-page.html).

## Executando

Para executar entre na pasta a qual está o código utilizando o comando `cd <nome_pasta>`

Execute `fpc hello.pas` para compilar o código

Finalmente execute `./hello` para executar o código compilado e seja Feliz :)

---

Exemplo prático estando na pasta raiz:

```bash
fpc 1000_hello.pas
./hello
```

Saida do programa:

```text
Hello World!

```

## Links Didáticos

[Guia Pascal pela UFPR](https://www.inf.ufpr.br/cursos/ci055/pascal.pdf)

[Compilador Pascalzim](http://pascalzimbr.blogspot.com/p/blog-page.html)