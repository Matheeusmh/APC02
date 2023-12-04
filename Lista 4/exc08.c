/* 8) Fazer uma função recursiva que conta o número 
de ocorrências de um determinado caracter, 
caract(char c, char s[]). */
#include <stdio.h>
#include <conio.h>
#include <string.h>

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
