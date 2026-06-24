#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1 && n != 0) {
        int m = 1;

        while (1) {
            int regioes[101];
            
            for (int i = 1; i <= n; i++) {
                regioes[i] = 1;
            }

            regioes[1] = 0;
            int restantes = n - 1;
            int posicao_atual = 1;
            int ultima_desligada = 1;

            while (restantes > 0) {
                int passos = 0;
                
                while (passos < m) {
                    posicao_atual++;
                    if (posicao_atual > n) {
                        posicao_atual = 1;
                    }
                    if (regioes[posicao_atual] == 1) {
                        passos++;
                    }
                }

                regioes[posicao_atual] = 0;
                ultima_desligada = posicao_atual;
                restantes--;
            }

            if (ultima_desligada == 13) {
                printf("%d\n", m);
                break;
            }

            m++;
        }
    }

    return 0;
}
