/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 20/11/2023
---------------------------------------------------------------------------
1. Leia 10 números inteiros e armazene em um vetor. Por meio da função primo() e utilizando ponteiros imprima
na tela os elementos que são primos e suas respectivas posições no vetor. */
#include <stdio.h>

void primo(int *vetor)
{
    int i, j, count;

    printf("\nNumeros primos:\n");
    for (i = 0; i < 10; i++)
    {
        count = 0;
        for (j = 1; j <= *(vetor + i); j++)
        {
            if (*(vetor + i) % j == 0)
            {
                count++;
            }
        }
        if (count == 2 && *(vetor + i) != 1)
        {
            printf("O valor %d eh um numero primo e se encontra na posicao %d\n", *(vetor + i), i);
        }
    }
}

int main(void)
{
    int vet[10], i;

    printf("Digite 10 valores inteiros: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    primo(vet);

    return (0);
}
