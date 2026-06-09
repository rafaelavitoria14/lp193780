/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 09/06/2026
Objetivo    : Separar 15 números em vetores de pares e ímpares, imprimindo-os sempre que um vetor atingir 5 posições.
Aprendizado : Utilizar vetores, contadores e estruturas de repetição para armazenar e processar dados dinamicamente.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int par[5], impar[5];
    int p = 0, i = 0, num;

    for (int k = 0; k < 15; k++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            par[p] = num;
            p++;

            if (p == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                p = 0;
            }
        } else {
            impar[i] = num;
            i++;

            if (i == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                i = 0;
            }
        }
    }

    for (int j = 0; j < i; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for (int j = 0; j < p; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
