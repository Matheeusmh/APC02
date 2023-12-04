/* 9) Escreva uma função recursiva que produza o 
reverso de um string, reverse(char s[]).
 */
#include <stdio.h>
#include <string.h>

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
int main(void)
{
    char s[100];

    printf("Digite uma string: ");
    fgets(s, 101, stdin);
    s[strlen(s) - 1] = '\0';

    reverse(s);

    return (0);
}
