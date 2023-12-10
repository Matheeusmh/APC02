/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/11/2023
---------------------------------------------------------------------------
8) Fazer uma função recursiva que conta o número 
de ocorrências de um determinado caracter, 
caract(char c, char s[]). */
#include <stdio.h>
#include <conio.h>
#include <string.h>

int caract(char c, char *s, int *count, int tamanho);
int main(void)
{
    int count = 0;
    char s[100], c, tamanho = 0;

    printf("Digite uma string: ");
    fgets(s, 101, stdin);
    s[strlen(s) - 1] = '\0';

    printf("Digite qual caracter contar: ");
    c = getchar();

    caract(c, s, &count, tamanho);

    printf("\nO caracter %c aparece %d vezes na string!", c, count);

    return (0);
}

int caract(char c, char *s, int *count, int tamanho)
{
    if (*(s + tamanho) != '\0')
    {
        caract(c, s, count, tamanho + 1);
        if (*(s + tamanho) == c)
        {
            (*count)++;
        }
    }
}
