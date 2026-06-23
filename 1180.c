/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 23/06/2026
Objetivo    :
Aprendizado : 
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int n, i;
    
    // Lê o tamanho do vetor
    if (scanf("%d", &n) != 1) return 0;
    
    int x[n];
    int menor, posicao;
    
    // Lê os elementos e acha o menor/posição
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        
        if (i == 0) {
            menor = x[i];
            posicao = i;
        } else if (x[i] < menor) {
            menor = x[i];
            posicao = i;
        }
    }
    
    // Exibe o resultado exatamente como formatado no problema
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    
    return 0;
}
