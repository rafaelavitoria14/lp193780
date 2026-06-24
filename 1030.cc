/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 09/06/2026
Objetivo    : 
Aprendizado : 
-------------------------------------------------------------------------- */

#include <iostream>

int sobrevivente(int n, int k) {
    if (n == 1) return 0;
    return (sobrevivente(n - 1, k) + k) % n;
}

int main() {
    int NC, n, k;

    std::cin >> NC;

    for (int i = 1; i <= NC; ++i) {
        std::cin >> n >> k;

        std::cout << "Case " << i << ": " << sobrevivente(n, k) + 1 << "\n";
    }

    return 0;
}
