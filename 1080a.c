/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 14/04/2026
Objetivo    : Ler 100 valores inteiros e identificar o maior valor.
Aprendizado : Uso de laço de repetição (for), estruturas condicionais (if).
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {

    int x;
    int maior, pos;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &x);

        if (i == 1) {
            maior = x;
            pos = i;
        } else if (x > maior) {
            maior = x;
            pos = i;
        }
    }

    printf("%d\n%d\n", maior, pos);

    return 0;
}
