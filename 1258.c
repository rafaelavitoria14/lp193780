/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 16/06/2026
Objetivo    : Ordenar uma lista de pedidos de camisetas de uma turma com base em três critérios prioritários de ordenação: cor dos detalhes (ascendente), tamanho da peça (descendente) e o nome do aluno (alfabético ascendente).
Aprendizado : Utilizar estruturas de dados personalizados (struct) combinadas com algoritmos de ordenação por bolha (Bubble Sort) aplicados a strings e caracteres sob múltiplas condições lógicas.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

struct Camiseta {
    char nome[100];
    char cor[20];
    char tamanho;
};

int main() {
    int n;
    int primeiro = 1;

    while (scanf("%d", &n) == 1 && n != 0) {
        struct Camiseta lista[65];

        for (int i = 0; i < n; i++) {
            char lixo;
            scanf("%c", &lixo);
            fgets(lista[i].nome, 100, stdin);
            lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';
            scanf("%s %c", lista[i].cor, &lista[i].tamanho);
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                int trocar = 0;
                int comp_cor = strcmp(lista[j].cor, lista[j + 1].cor);

                if (comp_cor > 0) {
                    trocar = 1;
                } else if (comp_cor == 0) {
                    if (lista[j].tamanho < lista[j + 1].tamanho) {
                        trocar = 1;
                    } else if (lista[j].tamanho == lista[j + 1].tamanho) {
                        if (strcmp(lista[j].nome, lista[j + 1].nome) > 0) {
                            trocar = 1;
                        }
                    }
                }

                if (trocar == 1) {
                    struct Camiseta aux = lista[j];
                    lista[j] = lista[j + 1];
                    lista[j + 1] = aux;
                }
            }
        }

        if (primeiro == 0) {
            printf("\n");
        }
        primeiro = 0;

        for (int i = 0; i < n; i++) {
            printf("%s %c %s\n", lista[i].cor, lista[i].tamanho, lista[i].nome);
        }
    }

    return 0;
}
