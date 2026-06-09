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

int main() {
    int n, leds;
    char numero[101];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", numero);

        leds = 0;

        for (int j = 0; numero[j] != '\0'; j++) {
            switch (numero[j]) {
                case '0': leds += 6; break;
                case '1': leds += 2; break;
                case '2': leds += 5; break;
                case '3': leds += 5; break;
                case '4': leds += 4; break;
                case '5': leds += 5; break;
                case '6': leds += 6; break;
                case '7': leds += 3; break;
                case '8': leds += 7; break;
                case '9': leds += 6; break;
            }
        }

        printf("%d leds\n", leds);
    }

    return 0;
}
