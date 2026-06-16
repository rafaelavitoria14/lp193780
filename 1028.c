/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 16/06/2026
Objetivo    : 
Aprendizado : 
-------------------------------------------------------------------------- */

#include <stdio.h>

void main ()
{

	int ricardo, vicente, resultado = 0;
	int casos;

	scanf("%ds", &casos);

	while (casos--)
	{

		scanf("%d %d", &ricardo, &vicente);

		// MDC simples;
		while (vicente != 0)
		{

			resultado = ricardo % vicente;
			ricardo = vicente;
			vicente = resultado;

		}

		printf("%d\n", ricardo);

	}
}
