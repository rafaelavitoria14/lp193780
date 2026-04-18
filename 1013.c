/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 07/04/2026
Objetivo    : Ler três valores inteiros e mostrar o maior deles.
Aprendizado : Uso da função abs e fórmula para encontrar o maior valor sem usar estruturas condicionais.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, maiorAB, maior;
    
    scanf("%d %d %d", &a, &b, &c);
    
    maiorAB = (a + b + abs (a - b)) / 2;
    maior = (maiorAB + c + abs(maiorAB - c)) / 2;
    
    printf("%d eh o maior\n", maior);
  
    return 0;
}
