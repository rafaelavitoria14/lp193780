/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 02/06/2026
Objetivo    : Decodificar uma mensagem criptografada pela Cifra de César, deslocando cada letra para a esquerda pelo número de posições informado.
Aprendizado : Manipulação de caracteres usando a tabela ASCII e aplicação de deslocamentos circulares no alfabeto para criptografia e descriptografia de textos.
------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {
    int n, deslocamento;
    char str[55];

    scanf("%d", &n);

    while (n--) {
        scanf("%s", str);
        scanf("%d", &deslocamento);

        for (int i = 0; i < strlen(str); i++) {
          
            int decodificado = str[i] - deslocamento;

            if (decodificado < 65) {
                decodificado += 26; 
            }

            printf("%c", decodificado);
        }
        printf("\n");
    }

    return 0;
}
