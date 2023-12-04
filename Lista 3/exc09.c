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

// Declaração dos protótipos das funções:
void ordenar(double *vetor_a);
void imprimir(double *vetor_a);

int main(void)
{
    // Declaração de variáveis:
    double vet_a[11];
    int i;

    // Solicitar e armazenar os valores do vetor:
    printf("\t___ORDENAR O VETOR___\n");
    printf("Digite 10 valores reais: ");
    for (int i = 0; i < 11; i++)
    {
        scanf("%lf", &vet_a[i]); // Armazenar...
    }

    ordenar(vet_a);  // Chamada da função ordenar();
    imprimir(vet_a); // Chamada da função imprimir().

    return (0);
}

// Função que realiza a ordenação do vetor por meio de ponteiros:
void ordenar(double *vetor_a)
{
    // Declaração de variáveis:
    int i, j;
    double aux = 0;

    // Verifica e ordena os valores em ordem crescente:
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

    // Ordena os valores em ordem decrescente após o sexto elemento:
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

// Função para a impressão dos valores do vetor:
void imprimir(double *vetor_a)
{
    // Declaração de variável:
    int i;

    // Imprimir os valores do vetor:
    printf("\n\t__VETOR ORDENADO__\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2lf  ", vetor_a[i]);
    }
    printf("\n");
}
