/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 05/05/2026
Objetivo    : Verificar, à partir de dois valores muito grandes A e B, se B corresponde aos últimos dígitos de A.
Aprendizado : Manipular strings em C para verificar se uma sequência de caracteres corresponde ao final de outra string.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);

    char a[1001], b[1001];

    while (n--) {

        scanf("%s %s", a, b);

        int ta = strlen(a);
        int tb = strlen(b);

        if (tb > ta) {
            printf("nao encaixa\n");
        }
        else if (strcmp(a + ta - tb, b) == 0) {
            printf("encaixa\n");
        }
        else {
            printf("nao encaixa\n");
        }
    }

    return 0;
}
