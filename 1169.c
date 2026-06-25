/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 23/06/2026
Objetivo    : Calcular a quantidade de quilos de trigo obtidos ao dobrar o número de grãos a cada casa de um tabuleiro de xadrez até a casa X, sabendo que cada 12 grãos equivalem a 1 grama.
Aprendizado : Compreender a importância do uso de tipos de dados de alta capacidade, como o unsigned long long, para lidar com o crescimento exponencial de valores sem estourar o limite de bits.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

int main() {
    int n, x;

    if (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            if (scanf("%d", &x) == 1) {
                unsigned long long graos = 0;

                if (x == 64) {
                    graos = 18446744073709551615ULL;
                } else {
                    graos = (unsigned long long)pow(2, x) - 1;
                }

                unsigned long long kg = (graos / 12) / 1000;

                printf("%llu kg\n", kg);
            }
        }
    }

    return 0;
}
