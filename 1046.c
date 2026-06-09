/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 09/06/2026
Objetivo    : Calcular a duração de um jogo considerando que ele pode terminar no dia seguinte
Aprendizado : Utilizar funções com retorno int e estruturas condicionais para tratar diferentes casos de cálculo de tempo.
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcularDuracao(int inicio, int fim) {
    if (inicio == fim)
        return 24;
    else if (inicio < fim)
        return fim - inicio;
    else
        return (24 - inicio) + fim;
}

int main() {
    int inicio, fim;

    scanf("%d %d", &inicio, &fim);

    printf("O JOGO DUROU %d HORA(S)\n", calcularDuracao(inicio, fim));

    return 0;
}
