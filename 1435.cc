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
