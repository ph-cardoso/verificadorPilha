# Verificador usando pilha

**Aluno:** Pedro Henrique Lima Cardoso

## Problema

Um exemplo de utilização de pilha consiste em avaliar uma expressão aritmética segundo a utilização dos parênteses “()”, colchetes “[]” e chaves “{}”. O problema consiste em criar uma pilha de caracteres. O programa recebe uma sequência de caracteres que representa uma expressão aritmética genérica, por exemplo: {A*(A+B)}. A expressão é lida caractere a caractere da esquerda para direita. Quando um caractere de abertura é encontrado “(”, “[”, ou “{” esse caractere é empilhado. Quando um caractere de fechamento é encontrado “)”, “]”ou “}” o elemento do topo da pilha é comparado. Se o elemento do topo da pilha representa a abertura do respectivo fechamento, então o elemento é desempilhado. Quando o final da expressão é obtido, se a pilha está vazia, então a expressão está correta, caso contrário a expressão está incorreta.

Simule a ação do algoritmo de verificação de “()”, “{}” e “[]” nas expressões aritméticas a seguir e verifique o resultado da avaliação (se a expressão é válida ou não):

**a)** (A + B})

**b)** {[A + B] – [(C - D)]

**c)** (A + B) – {C + D} – [F + G]

**d)** ((H) * {([J + K])})

**e)** (((A)))

## Dados Relevantes

TABELA ASCII

CHAR | INT
--- | ---
( | 40
) | 41
[ | 91
] | 93
{ | 123
} | 125

## Resultado

**a)** Equação Inválida

**b)** Equação Inválida

**c)** Equação Válida

**d)** Equação Válida

**e)** Equação Válida
