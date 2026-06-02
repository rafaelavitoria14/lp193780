/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafaela Vitória da Costa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 02/06/2026
Objetivo    : Percorrer a frase ignorando os espaços e alternar as letras entre maiúsculas e minúsculas, começando sempre com a primeira letra em maiúscula, preservando os espaços originais.
Aprendizado : Manipulação de strings em C, utilizando conversão de caracteres e controle de estado para alternar entre letras maiúsculas e minúsculas enquanto percorre a frase.
------------------------------------------------------------------------ */
#include<stdio.h>
#include<string.h>

int main (){
    char vet[1000];
    int i, a=0;
    
    while(gets(vet) != NULL){
        a=0;
        for(i=0; vet[i] != '\0'; i++){
            if(vet[i] >= 'A' && vet[i] <= 'Z'){	
                a++;
                if(a%2==0) 
					vet[i]+=32;
            }
            if(vet[i] >= 'a' && vet[i] <= 'z'){
                a++;
                if(a%2!=0) 
					vet[i]-=32;
            }
        }
        printf("%s\n", vet);
    }
    return
}

