/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 14/04/2026
Objetivo    : Ler 100 valores inteiros e identificar o maior valor.
Aprendizado : Uso de vetores.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {

    int v[100];
    int maior, pos;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &v[i]);
    }

    maior = v[0];
    pos = 1;

    for (int i = 1; i < 100; i++) {
        if (v[i] > maior) {
            maior = v[i];
            pos = i + 1;
        }
    }

    printf("%d\n%d\n", maior, pos);

    return 0;
}
