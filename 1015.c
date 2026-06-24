/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 09/06/2026
Objetivo    : Calcular a distância entre dois pontos no plano cartesiano utilizando suas coordenadas.
Aprendizado : Aplicar a fórmula da distância entre dois pontos em C usando variáveis, operações matemáticas e a função sqrt().
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1;
    double x2, y2;

    if (scanf("%lf %lf", &x1, &y1) == 2 && scanf("%lf %lf", &x2, &y2) == 2) {
        double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        printf("%.4lf\n", distancia);
    }

    return 0;
}
