/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 23/06/2026
Objetivo    : Ler um vetor de inteiros, identificar qual é o menor elemento armazenado e descobrir em qual índice (posição) ele se encontra.
Aprendizado : Praticar a busca linear e estruturas de comparação condicional (if) para encontrar valores mínimos varrendo todas as posições de um vetor sequencialmente.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        int vetor[1005];

        for (int i = 0; i < n; i++) {
            scanf("%d", &vetor[i]);
        }

        int menor = vetor[0];
        int posicao = 0;

        for (int i = 1; i < n; i++) {
            if (vetor[i] < menor) {
                menor = vetor[i];
                posicao = i;
            }
        }

        printf("Menor valor: %d\n", menor);
        printf("Posicao: %d\n", posicao);
    }

    return 0;
}
