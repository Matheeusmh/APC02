/* 50. Implemente uma função recursiva que imprima 
de 0 a n. */
#include <stdio.h>

// Declaração do protótipo da função:
int imprimir(int num);

int main(void)
{
    // Declaração de variável:
    int num;

    // Solicitar e armazenar o valor de num:
    printf("\t___IMPRIMIR UMA SEQUENCIA NUMERICA___\n");
    printf("Digite um valor inteiro: ");
    scanf("%d", &num); // Armazenando...

    printf("\n\t__SEQUENCIA__\n");
    imprimir(num); // Chamada da função imprimir().

    printf("\n");

    return (0);
}

// Implementação da função recursiva para imprimir sequência até n:
int imprimir(int num)
{
    if (num >= 0) // Condição de parada e impressão.
    {
        imprimir(num - 1); // Chamada da função imprimir().
        printf("%d  ", num);
    }
}
