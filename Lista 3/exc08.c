/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 22/11/2023
---------------------------------------------------------------------------
8. Leia um vetor com 10 números reais, ordene os elementos deste vetor utilizando a função ordena() e no
final escreva os elementos do vetor ordenado com o uso da função imprima(). Utilize ponteiros para
acessar os elementos do vetor nas funções. */
#include <stdio.h>

void ordena(float *vetor)
{
    int i, j, z;
    float aux = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            z = i;
            if (*(vetor + i) > *(vetor + j))
            {
                aux = *(vetor + j);
                *(vetor + j) = *(vetor + i);
                *(vetor + i) = aux;
            }
        }
    }
}

void imprima(float *vetor)
{
    int i;

    printf("\nVETOR ORDENADO:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f  ", *(vetor + i));
    }
}

int main(void)
{
    float vet[10];
    int i;

    printf("Digite os 10 valores reais: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &vet[i]);
    }

    ordena(vet);
    imprima(vet);

    return (0);
}
