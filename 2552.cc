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
