/* 54. Escrever uma função recursiva que retorna o
tamanho de um string, tamstring(char s[]). */
#include <stdio.h>

// Declaração do protótipo da função:
int tamstring(char *string, int *count);

int main(void)
{
    // Declaração de variáveis:
    char string[50];
    int tamanho = 0;

    // Solicitar e armazenar uma string:
    printf("\t___CALCULAR O TAMANHO DA STRING___\n");
    printf("  Digite uma string: ");
    fgets(string, 51, stdin); // Armazenando...

    tamstring(string, &tamanho); // Chamada da função tamstring().

    printf("  O tamanho da string eh: %d\n", tamanho); // Imprimir o tamanho da string.

    return (0);
}

// Função recursiva para verificar o tamanho de uma string:
int tamstring(char *string, int *count)
{
    if (*string != '\n') // Condição de parada.
    {
        tamstring(string + 1, count); // Chamada da função tamstring.
        (*count)++;                   // Efetuar operação na recursão.
    }
}
