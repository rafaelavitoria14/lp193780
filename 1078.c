/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Utilizar estruturas básicas para montar a tabuada.
Aprendizado : Entrada e saída de dados e estrutura de repetição para realizar calculos automáticamente.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int n, i;
    
    scanf ("%d", &n);
    
    for (i = 1; i <= 10; i++)
        printf ("%d x %d = %d\n", i, n, i * n);
        
    return 0;
}
