/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/12/2023
---------------------------------------------------------------------------
2) Faça um programa para imprimir a sequência de 
Fibonacci */
#include <stdio.h>

// Declaração do protótipo da função:
int fibonacci(int *seq_fibonacci, int tamanho);

int main(void)
{
    // Declaração de variáveis:
    int tamanho;

    // Solicitar e armazenar o número de elementos da sequência:
    printf("___SEQUENCIA DE FIBONACCI___\n");
    printf("Digite o numero de termos da sequencia: ");
    scanf("%d", &tamanho); // Armazenando...
    
    int seq_fibonacci[tamanho]; // Declaração da variável.

    fibonacci(seq_fibonacci, tamanho); // Chamada da função fibonacci().

    return (0);
}

// Função para imprimir a sequência de Fibonacci:
int fibonacci(int *seq_fibonacci, int tamanho)
{
    // Declaração da variável:
    int i = 0;

    for (; i < tamanho; i++)
    {
        if (i == 0 || i == 1)
        {
            *(seq_fibonacci + i) = i;
            printf("%d  ", i);
        }
        else
        {
            *(seq_fibonacci + i) = *(seq_fibonacci + (i - 1)) + *(seq_fibonacci + (i - 2));
            printf("%d  ", *(seq_fibonacci + i));
        }
    }
}
