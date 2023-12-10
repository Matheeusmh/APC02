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
void fibonacci(int *seq_fibonacci, int tamanho);

int main(void)
{
    // Declaração de variáveis:
    int tamanho;

    // Solicitar e armazenar o número de elementos da sequência:
    printf("\t___SEQUENCIA DE FIBONACCI___\n");
    printf("Digite o numero de termos da sequencia: ");
    scanf("%d", &tamanho); // Armazenando...
    
    int seq_fibonacci[tamanho + 1]; // Declaração da variável.

    printf("\n\t__FIBONACCI__\n");
    fibonacci(seq_fibonacci, tamanho + 1); // Chamada da função fibonacci().

    return (0);
}

// Função recursiva para imprimir a sequência de Fibonacci:
void fibonacci(int *seq_fibonacci, int tamanho)
{
    if (tamanho == 0) // Condição de parada.
    {
        *seq_fibonacci = tamanho; // Atribuição de valor.
        printf("%d ", *seq_fibonacci); // Imprimir o valor da sequência.
    }
    else if (tamanho == 1) 
    {
        fibonacci(seq_fibonacci - 1, tamanho - 1); // Chamada da função fibonacci().
        *seq_fibonacci = tamanho; // Atribuição de valor.
        printf("%d ", *seq_fibonacci); // Imprimir o valor da sequência.

    }
    else
    {
        fibonacci(seq_fibonacci - 1, tamanho - 1); // Chamada da função fibonacci().
        *seq_fibonacci = *(seq_fibonacci - 1) + *(seq_fibonacci - 2); // Calcular o atual valor da sequência.
        printf("%d ", *seq_fibonacci); // Imprimir o valor da sequência.
    }
}
