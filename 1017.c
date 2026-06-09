/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 09/07/2026
Objetivo    : Calcular a quantidade de combustível gasta em uma viagem com base no tempo e na velocidade média.
Aprendizado : Criar e utilizar uma função que retorna um valor float para realizar cálculos e exibir resultados formatados.
-------------------------------------------------------------------------- */

#include <stdio.h>

float calcularLitros(int tempo, int velocidade) {
    float distancia = tempo * velocidade;
    return distancia / 12.0;
}

int main() {
    int tempo, velocidade;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    printf("%.3f\n", calcularLitros(tempo, velocidade));

    return 0;
}
