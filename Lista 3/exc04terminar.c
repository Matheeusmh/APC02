/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 21/11/2023
---------------------------------------------------------------------------
4. Leia dois vetores de inteiros x e y, cada um com 10 elementos (verifique e não permita que o usuário informe
elementos repetidos). Calcule e mostre os vetores resultantes em cada caso abaixo, utilize uma função menu()
para chamar cada função e manipule o vetor nas funções com o uso de ponteiros: Soma() -> soma de cada
elemento de x com o elemento da mesma posição em y. Produto() -> multiplicação de cada elemento de x
com o elemento da mesma posição em y. Diferença() -> todos os elementos de x que não existam em y.
Interseção() -> apenas os elementos que aparecem nos dois vetores. Uniao() -> todos os elementos de x, e
todos os elementos de y que não estão em x. */
#include <stdio.h>
#include <stdlib.h>

int repetido(int *vetor, int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        if (*(vetor + count) == *(vetor + i))
        {
            printf("Valor repetido!\nDigite um novo valor! Faltam %d...\n", 10 - count);
            return 1;
        }
    }
    return 0;
}

void menu(int *x, int *y, int *resultado)
{
    int i = 0;
    printf("\n\t__DADOS__\n");
    printf("Vetor X: \n");
    for (; i < 10; i++)
    {
        printf("%d  ", *(x + i));
    }
    printf("\nVetor Y: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", *(y + i));
    }
    soma(x, y, resultado);
    produto(x, y, resultado);
    diferenca(x, y, resultado);
    intersecao(x, y, resultado);
    uniao(x, y, resultado);
}

void soma(int *x, int *y, int *resultado)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        *(resultado + i) = *(x + i) + *(y + i);
    }
    printf("\nSOMA:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", *(resultado + i));
    }
}

void produto(int *x, int *y, int *resultado)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        *(resultado + i) = *(x + i) * *(y + i);
    }
    printf("\nPRODUTO:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", *(resultado + i));
    }
}
void diferenca(int *x, int *y, int *resultado)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        *(resultado + i) = *(x + i) - *(y + i);
    }
    printf("\nDIFERENCA:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", *(resultado + i));
    }
}
void intersecao(int *x, int *y, int *resultado)
{
    int i, j, count = 0, z = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (*(x + i) == *(y + j))
            {
                *(resultado + z++) = *(x + i);
                count++;
            }
        }
    }
    printf("\nINTERSECAO: \n");
    for (i = 0; i < count; i++)
    {
        printf("%d  ", *(resultado + i));
    }
}

void uniao(int *x, int *y, int *resultado)
{
    int i, j = 0, z = 0, count = 0;

    for (i = 0; i < 10; i++)
    {
        *(resultado + z++) = *(x + i);
        for (j = 0; j < z; j++)
        {
            if (*(y + i) != *(resultado + j))
            {
                *(resultado + z++) = *(y + i);
            }
            else
            {
                count++;
            }
        }
    }
    printf("\nUNIAO dos dois vetores:\n");
    for (i = 0; i < (20 - count); i++)
    {
        printf("%d  ", *(resultado + i));
    }
}

int main(void)
{
    int x[10], y[10], i, resultado[20];

    printf("Digite os elementos do vetor X: ");
    for (i = 0; i < 10; i++)
    {
        do
        {
            scanf("%d", &x[i]);
        } while (repetido(x, i));
    }
    printf("Digite os elementos do vetor Y: ");
    for (i = 0; i < 10; i++)
    {
        do
        {
            scanf("%d", &y[i]);
        } while (repetido(y, i));
    }

    menu(x, y, resultado);

    return (0);
}

