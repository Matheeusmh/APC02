/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/11/2023
---------------------------------------------------------------------------
9) Escreva uma função recursiva que produza o 
reverso de um string, reverse(char s[]).
 */
#include <stdio.h>
#include <string.h>

int reverse(char *s);
int main(void)
{
    char s[100];

    printf("Digite uma string: ");
    fgets(s, 101, stdin);
    s[strlen(s) - 1] = '\0';

    reverse(s);

    return (0);
}

int reverse(char *s)
{
    if (*s == '\0')
    {
        printf("%c", *s);
    }
    else
    {
        reverse(s + 1);
        printf("%c", *s);
    }
}
