/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/12/2023
---------------------------------------------------------------------------
3) Implemente uma função recursiva que imprima 
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
