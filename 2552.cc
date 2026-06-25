/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 23/06/2026
Objetivo    : Modificar uma matriz substituindo as posições com pães de queijo pelo número 9 e as posições vazias pela quantidade de pães de queijo presentes nas células diretamente adjacentes.
Aprendizado : Manipular matrizes bidimensionais para verificar vizinhanças (cima, baixo, esquerda, direita) controlando os limites dos índices para evitar acessos inválidos na memória.
-------------------------------------------------------------------------- */

#include <iostream>

int main() {
    int n, m;

    while (std::cin >> n >> m) {
        int tabuleiro[105][105];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cin >> tabuleiro[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (tabuleiro[i][j] == 1) {
                    std::cout << 9;
                } else {
                    int paes_vizinhos = 0;

                    if (i - 1 >= 0 && tabuleiro[i - 1][j] == 1) paes_vizinhos++;
                    if (i + 1 < n && tabuleiro[i + 1][j] == 1) paes_vizinhos++;
                    if (j - 1 >= 0 && tabuleiro[i][j - 1] == 1) paes_vizinhos++;
                    if (j + 1 < m && tabuleiro[i][j + 1] == 1) paes_vizinhos++;

                    std::cout << paes_vizinhos;
                }
            }
            std::cout << "\n";
        }
    }

    return 0;
}
