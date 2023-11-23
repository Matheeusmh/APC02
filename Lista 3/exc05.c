/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 20/11/2023
---------------------------------------------------------------------------
5. Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elimine as posições com valor
zero. Para isso, todos os elementos a frente do valor zero, devem ser movidos uma posição para trás no vetor
por meio da função compacta() utilizando ponteiros para acessar as posições. */
#include <stdio.h>

int compacta(int *vetor, int *indice)
{
        int i, j, n;

        for (i = 0; i < 15; i++)
        {
                if (*(vetor + i) == 0)
                {
                        for (j = i + 1; j < 15; j++)
                        {
                                n = i;
                                *(vetor + n++) = *(vetor + j);
                        }
                        indice++;
                }
        }
}

int main(void)
{
        int vetor[15], i, indice = 0;

        printf("Digite os valores de 15 elementos: ");
        for (i = 0; i < 15; i++)
        {
                scanf("%d", &vetor[i]);
        }

        compacta(vetor, &indice);

        for (i = 0; i < (15 - indice); i++)
        {
                printf("%d ", vetor[i]);
        }
        return(0);
}

