/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 23/06/2026
Objetivo    : Ler um vetor de 20 elementos, inverter a ordem dos seus valores (trocando o primeiro com o último, o segundo com o penúltimo, etc.) e exibir o vetor modificado.
Aprendizado : Dominar a manipulação de índices de arrays (std::vector ou vetores estáticos) em C++ e utilizar a técnica de dois ponteiros ou expressões matemáticas como 19 - i para inverter elementos de forma simétrica.
-------------------------------------------------------------------------- */

#include <iostream>

int main() {
    int N[20];

    for (int i = 0; i < 20; i++) {
        std::cin >> N[i];
    }

    for (int i = 0; i < 10; i++) {
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    for (int i = 0; i < 20; i++) {
        std::cout << "N[" << i << "] = " << N[i] << "\n";
    }

    return 0;
}
