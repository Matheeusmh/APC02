/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 22/11/2023
---------------------------------------------------------------------------
9. Considere um vetor A com 11 elementos onde A1 < A2 < · · · < A6 > A7 > A8 > · · · > A11, ou seja, está
ordenado em ordem crescente até o sexto elemento e a partir desse elemento está ordenado em ordem
decrescente. Dado o vetor da questão anterior, faça uma função para ordenar os elementos, acesse o vetor
por meio de ponteiros. */
#include <stdio.h>

void ordenar(double *vetor_a)
{
    int i, j;
    double aux = 0;

    for (i = 0; i < 11; i++)
    {
        for (j = (i + 1); j < 11; j++)
        {
            if (*(vetor_a + i) > *(vetor_a + j))
            {
                aux = *(vetor_a + j);
                *(vetor_a + j) = *(vetor_a + i);
                *(vetor_a + i) = aux;
            }
        }
    }
    for (i = 10; i >= 5; i--)
    {
        for (j = (i - 1); j >= 5; j--)
        {
            if (*(vetor_a + j) < *(vetor_a + i))
            {
                aux = *(vetor_a + i);
                *(vetor_a + i) = *(vetor_a + j);
                *(vetor_a + j) = aux;
            }
        }
    }
}

void imprimir(double *vetor_a)
{
    int i;

    printf("A: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2lf  ", vetor_a[i]);
    }
}
int main(void)
{
    double vet_a[11];
    int i;

    printf("Digite 10 valores reais: ");
    for (int i = 0; i < 11; i++)
    {
        scanf("%lf", &vet_a[i]);
    }

    ordenar(vet_a);
    imprimir(vet_a);

    return(0);
}
