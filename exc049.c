/* 49. Escreva uma função recursiva que produza o 
reverso de um string, reverse(char s[]).
 */
#include <stdio.h>
#include <string.h>

// Declaração do protótipo da função:
int reverse(char *s);

int main(void)
{
    // Declaração da variável:
    char s[100];

    // Solicitar e armazenar uma string:
    printf("\t___IMPRIMIR O REVERSO DE UMA STRING___\n");
    printf("  Digite uma string: ");
    fgets(s, 101, stdin); // Armazenando a string...
    s[strlen(s) - 1] = '\0'; // Adicionando o carácter final da string.

    printf("\n\t__REVERSO DA STRING__\n  ");
    reverse(s); // Chamada da função reverse() para imprimir o reverso de uma string.

    printf("\n");

    return (0);
}

// Função recursiva que produz o reverso de um string:
int reverse(char *s)
{
    if (*s == '\0') // Condição de parada.
    {
        printf("%c", *s);
    }
    else
    {
        reverse(s + 1); // Chamada da função reverse() por ela mesma.
        printf("%c", *s); // Imprimir durante a recursão.
    }
}
