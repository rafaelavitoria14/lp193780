/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 16/06/2026
Objetivo    : Verificar se a grade do jogo sudoku está correta, validando as linhas e colunas conforme as regras do jogo.
Aprendizado : Aplicação de matrizes, estrutura set, verificação dos elemntos, decomposição do problema em funções e validação de regiões específicas de uma matriz.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int instancia = 1; instancia <= n; instancia++) {
        int sudoku[9][9];
        int valido = 1;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &sudoku[i][j]);
            }
        }

        for (int i = 0; i < 9; i++) {
            int frequencia[10] = {0};
            for (int j = 0; j < 9; j++) {
                int num = sudoku[i][j];
                if (num < 1 || num > 9 || frequencia[num] > 0) {
                    valido = 0;
                }
                frequencia[num]++;
            }
        }

        for (int j = 0; j < 9; j++) {
            int frequencia[10] = {0};
            for (int i = 0; i < 9; i++) {
                int num = sudoku[i][j];
                if (num < 1 || num > 9 || frequencia[num] > 0) {
                    valido = 0;
                }
                frequencia[num]++;
            }
        }

        for (int bloco_i = 0; bloco_i < 9; bloco_i += 3) {
            for (int bloco_j = 0; bloco_j < 9; bloco_j += 3) {
                int frequencia[10] = {0};
                for (int i = bloco_i; i < bloco_i + 3; i++) {
                    for (int j = bloco_j; j < bloco_j + 3; j++) {
                        int num = sudoku[i][j];
                        if (num < 1 || num > 9 || frequencia[num] > 0) {
                            valido = 0;
                        }
                        frequencia[num]++;
                    }
                }
            }
        }

        printf("Instancia %d\n", instancia);
        if (valido == 1) {
            printf("SIM\n\n");
        } else {
            printf("NAO\n\n");
        }
    }

    return 0;
}
