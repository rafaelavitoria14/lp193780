/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 16/06/2026
Objetivo    : Calcular o valor de um termo na sequência de Fibonacci e contar quantas chamadas recursivas foram feitas para encontrar esse resultado.
Aprendizado : Entender o comportamento de funções recursivas e como criar uma variável global para rastrear a árvore de execução do algoritmo.
-------------------------------------------------------------------------- */

#include <stdio.h>

int chamadas;

int fibonacci(int n) {
    chamadas++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, x;

    if (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            if (scanf("%d", &x) == 1) {
                chamadas = 0;
                int resultado = fibonacci(x);
                printf("fib(%d) = %d calls = %d\n", x, chamadas - 1, resultado);
            }
        }
    }

    return 0;
}
