/* 7) Escrever uma função recursiva que retorna o 
tamanho de um string, tamstring(char s[]). */
#include <stdio.h>

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
