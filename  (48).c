/* 55. Fazer uma função recursiva que conta o número
de ocorrências de um determinado caracter,
caract(char c, char s[]). */
#include <stdio.h>
#include <conio.h>
#include <string.h>

// Declaração do protótipo da função:
int caract(char c, char *s, int *count, int tamanho);

int main(void)
{
    // Declaração de variáveis:
    int count = 0;
    char s[100], c, tamanho = 0;

    // Solicitar e armazenar uma string:
    printf("\t___CONTAR QUANTAS VEZES UM CARACTER SE REPETE___\n");
    printf("  Digite uma string: ");
    fgets(s, 101, stdin);    // Armazenar a string...
    s[strlen(s) - 1] = '\0'; // Adicionar o caracter final da string.

    // Solicitar e armazenar um carácter:
    printf("  Digite qual caracter contar: ");
    c = getchar(); // Armazenar o carácter...

    caract(c, s, &count, tamanho); // Chamada da função caract().

    // Imprimir o número de vezes que um caracter se repete:
    printf("\n  O caracter (%c) aparece %d vezes na string!\n", c, count);

    return (0);
}

// Função recursiva para verificar quantas vezes um carácter se repete:
int caract(char c, char *s, int *count, int tamanho)
{
    if (*(s + tamanho) != '\0') // Condição de parada.
    {
        caract(c, s, count, tamanho + 1); // Chamada da função caract().
        if (*(s + tamanho) == c)
        {
            (*count)++; // Contar durante a recursão o número de incidências.
        }
    }
}
