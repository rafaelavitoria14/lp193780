/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 23/06/2026
Objetivo    : Construir e exibir uma matriz quadrada de ordem N cujos elementos formam camadas concêntricas com valores numéricos crescentes (começando em 1) da borda em direção ao centro.
Aprendizado : Compreender como calcular o valor de cada posição de uma matriz com base na menor distância até uma de suas quatro bordas, utilizando uma lógica matemática direta com funções de mínimo.
-------------------------------------------------------------------------- */

#include <iostream>
#include <iomanip>

int main() {
    int n;

    while (std::cin >> n && n != 0) {
        int matriz[101][101];

        int valor = 1;
        int inicio = 1;
        int fim = n;

        while (inicio <= fim) {
            for (int i = inicio; i <= fim; i++) {
                for (int j = inicio; j <= fim; j++) {
                    matriz[i][j] = valor;
                }
            }
            inicio++;
            fim--;
            valor++;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (j == 1) {
                    std::cout << std::setw(3) << matriz[i][j];
                } else {
                    std::cout << " " << std::setw(3) << matriz[i][j];
                }
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }

    return 0;
}
