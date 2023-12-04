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

// Declaração dos protótipos das funções:
void ordena(double *vetor, int *count, double *vetor_ordenado);
void imprime(double *vetor_ordenado);

int main(void)
{
    // Declaração de variáveis:
    double vet[10], vetor_ordenado[10];
    int i;

    // Solicitar e armazenar os valores do vetor:
    printf("\t___ORDENAR OS VALORES DE UM VETOR___\n");
    printf("Digite 10 valores numericos: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%lf", &vet[i]); // Armazenar...
        if (i > 0)
        {
            ordena(vet, &i, vetor_ordenado); // Ordenar assim que for digitado pela função ordena().
        }
    }

    imprime(vetor_ordenado); // Chamada da função imprime.

    return (0);
}

// Função que ordena de forma crescente um elemento dentro do vetor:
void ordena(double *vetor, int *count, double *vetor_ordenado)
{
    // Declaração de variáveis:
    int i, j;
    double aux;

    // Ordena o vetor de forma crescente:
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

// Função para impressão dos elementos do vetor em ordem crescente:
void imprime(double *vetor_ordenado)
{
    // Declaração de variável:
    int i;

    printf("\n\t__VETOR ORDENADO__\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2lf  ", *(vetor_ordenado + i));
    }
    printf("\n");
}
