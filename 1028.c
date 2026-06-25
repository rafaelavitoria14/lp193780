/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 16/06/2026
Objetivo    : Encontrar o Maior Divisor Comum (MDC) entre dois números para achar o maior tamanho de pilha igualitária.
Aprendizado : Usar o Algoritmo de Euclides com um laço while para resolver divisibilidade de forma rápida e eficiente.
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcular_mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int n, f1, f2;

    if (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            if (scanf("%d %d", &f1, &f2) == 2) {
                int resultado = calcular_mdc(f1, f2);
                printf("%d\n", resultado);
            }
        }
    }

    return 0;
}
