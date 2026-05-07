/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : Para cada entrada, deve-se apresentar a mensagem criptografada.
Aprendizado : Uso de strings e caracteres em C para criptografar textos, inverter strings e alterar caracteres em posições específicas.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {

    int n;
    char texto[1001];

    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++) {

        fgets(texto, 1001, stdin);

        texto[strlen(texto) - 1] = '\0';

        int tam = strlen(texto);

        for(int j = 0; j < tam; j++) {

            if((texto[j] >= 'a' && texto[j] <= 'z') ||
               (texto[j] >= 'A' && texto[j] <= 'Z')) {

                texto[j] = texto[j] + 3;
            }
        }

        for(int j = 0; j < tam / 2; j++) {

            char aux = texto[j];

            texto[j] = texto[tam - 1 - j];

            texto[tam - 1 - j] = aux;
        }

        for(int j = tam / 2; j < tam; j++) {

            texto[j] = texto[j] - 1;
        }

        printf("%s\n", texto);
    }

    return 0;
}
