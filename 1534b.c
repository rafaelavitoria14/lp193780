/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 23/06/2026
Objetivo    : Imprimir o padrão de uma matriz quadrada diretamente na tela, definindo os valores 1, 2 ou 3 em tempo de execução com base nas regras das diagonais.
Aprendizado : Descobrir que é possível gerar e exibir padrões de matrizes de forma direta, economizando memória ao eliminar a necessidade de declarar e armazenar dados em um vetor bidimensional.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i + j == n - 1) {
                    printf("2");
                } else if (i == j) {
                    printf("1");
                } else {
                    printf("3");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
