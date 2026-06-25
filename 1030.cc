/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 09/06/2026
Objetivo    : Determinar a posição da última pessoa que sobrevive em uma roda de eliminações circulares com saltos fixos de tamanho k.
Aprendizado : Utilizar a programação dinâmica iterativa para resolver de forma otimizada o clássico Problema de Josephus sem estourar a memória.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int nc;

    if (scanf("%d", &nc) == 1) {
        for (int i = 1; i <= nc; i++) {
            int n, k;
            if (scanf("%d %d", &n, &k) == 2) {
                int sobrevivente = 0;

                for (int j = 1; j <= n; j++) {
                    sobrevivente = (sobrevivente + k) % j;
                }

                printf("Case %d: %d\n", i, sobrevivente + 1);
            }
        }
    }

    return 0;
}
