/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 09/06/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : Utilizar switch para associar diferentes valores a cada caractere de uma string e acumular resultados.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            char numero[105];
            scanf("%s", numero);

            int total_leds = 0;
            int tamanho = strlen(numero);

            for (int j = 0; j < tamanho; j++) {
                if (numero[j] == '1') total_leds += 2;
                else if (numero[j] == '2') total_leds += 5;
                else if (numero[j] == '3') total_leds += 5;
                else if (numero[j] == '4') total_leds += 4;
                else if (numero[j] == '5') total_leds += 5;
                else if (numero[j] == '6') total_leds += 6;
                else if (numero[j] == '7') total_leds += 3;
                else if (numero[j] == '8') total_leds += 7;
                else if (numero[j] == '9') total_leds += 6;
                else if (numero[j] == '0') total_leds += 6;
            }

            printf("%d leds\n", total_leds);
        }
    }

    return 0;
}
