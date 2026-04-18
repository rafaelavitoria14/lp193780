/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 14/04/2026
Objetivo    : Soma de ímpares consecutivos.
Aprendizado : Uso de estruturas condicionais (if), laço de repetição (for) e operador módulo (%) para identificar números ímpares
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int X, Y;
    int soma = 0;

    scanf("%d %d", &X, &Y);

    int inicio, fim;

    if (X < Y) {
        inicio = X;
        fim = Y;
    } else {
        inicio = Y;
        fim = X;
    }

    for (int i = inicio + 1; i < fim; i++) {
        if (i % 2 != 0) { // verifica se é ímpar
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
