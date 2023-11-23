/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 22/11/2023
---------------------------------------------------------------------------
10. Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescente esses valores,
guardando-os num vetor. Por meio da função ordena() e com o uso de ponteiros ordene o número assim
que ele for digitado. Mostre ao final na tela os valores em ordem, por meio da função imprime().*/
#include <stdio.h>

void ordena(double *vetor, int *count, double *vetor_ordenado)
{
    int i, j;
    double aux;

    for (i = 0; i <= *count; i++)
    {
        for (j = (i + 1); j <= *count; j++)
        {
            if (*(vetor + i) > *(vetor + j))
            {
                aux = *(vetor + j);
                *(vetor + j) = *(vetor + i);
                *(vetor + i) = aux;
            }
        }
        *(vetor_ordenado + i) = *(vetor + i);
    }
}

void imprime(double *vetor_ordenado)
{
    int i;

    printf("\nA:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2lf  ", *(vetor_ordenado + i));
    }
}
int main(void)
{
    double vet[10], vetor_ordenado[10];
    int i;

    printf("Digite 10 valores numericos: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%lf", &vet[i]);
        if (i > 0)
        {
            ordena(vet, &i, vetor_ordenado);
        }
    }

    imprime(vetor_ordenado);

    return (0);
}
