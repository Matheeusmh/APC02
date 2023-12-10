/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/11/2023
---------------------------------------------------------------------------
7) Escrever uma função recursiva que retorna o 
tamanho de um string, tamstring(char s[]). */
#include <stdio.h>

int tamstring(char *string, int count);
int main(void)
{ 
    char string[50];
    int tamanho = 0;

    printf("Digite uma string: ");
    fgets(string, 51, stdin);

    tamanho = tamstring(string, tamanho);

    printf("O tamanho da string eh: %d", tamanho);

    return (0);
}

int tamstring(char *string, int count)
{
    if (*(string + count) == '\n')
    {
        return (count);
    }
    else
    {
        return  ;
    }
}
