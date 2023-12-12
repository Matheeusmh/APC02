/* 48. Faça um programa para imprimir a sequência de
Fibonacci */
#include <stdio.h>

// Declaração do protótipo da função:
int fibonacci(int tamanho);

int main(void)
{
    // Declaração de variáveis:
    int tamanho, i;

    // Solicitar e armazenar o número de elementos da sequência:
    printf("\t___SEQUENCIA DE FIBONACCI___\n");
    printf("Digite o numero de termos da sequencia: ");
    scanf("%d", &tamanho); // Armazenando...

    // Imprimindo os termos da sequência:
    printf("\n\t__FIBONACCI__\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", fibonacci(i)); // Chamada da recursão fibonacci() para calcular a sequência.
    }
    printf("\n");

    return (0);
}

// Função recursiva para imprimir a sequência de Fibonacci:
int fibonacci(int tamanho)
{
    if (tamanho == 1) // Condição de parada.
    {
        return 1;
    }
    else if (tamanho == 0) // Condição de parada.
    {
        return 0;
    }
    else
    {
        return fibonacci(tamanho - 1) + fibonacci(tamanho - 2); // Chamada da função fibonacci() para calcular durante a recursão.
    }
}
