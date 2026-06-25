/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 16/06/2026
Objetivo    : Construir e exibir uma matriz quadrada de ordem N cujos elementos formam camadas concêntricas com valores numéricos crescentes (começando em 1) da borda em direção ao centro.
Aprendizado : Compreender como calcular o valor de cada posição de uma matriz com base na menor distância até uma de suas quatro bordas, utilizando uma lógica matemática direta com funções de mínimo.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int n, resposta;

    while (scanf("%d", &n))
    {
        if (!n)
            break;

        resposta = n;
        while (n > 1)
        {
            if (n % 2)
                n = 3 * n + 1;
            else
                n /= 2;
            resposta = n > resposta ? n : resposta;
        }

        printf("%d\n", resposta);
    }

    return 0;
}
