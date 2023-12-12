/* 46. Construa um programa que receba da linha de comando, por meio do argc argv, um número inteiro e
retorne seu fatorial na saída padrão, o qual é calculado por uma função denominada fat(). O número deve
ser enviado e manipulado na função como ponteiro. */
#include <stdio.h>
#include <stdlib.h>

// Declaração do protótipo da função:
int fat(int num, int *resultado);

int main(int argc, char *argv[])
{
    // Declaração de variáveis:
    int num = atoi(argv[1]), resultado = 1;

    fat(num, &resultado); // Chamada da função fat().

    printf("Fatorial: %d\n", resultado); // Imprimir o fatorial do valor de entrada.

    return (0);
}

// Função para calcular o fatorial com o uso de ponteiros e recursão:
int fat(int num, int *resultado)
{
    // Condição para dar inicio a recursão:
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        *resultado *= num;
        fat(num - 1, resultado);
    }
}
