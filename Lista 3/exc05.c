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

//  Declaração do protótipo da função:
void compacta(int *vetor, int *indice);

int main(void)
{
        // Declaração de variáveis:
        int vetor[15], i, indice = 0;
        //  Solicitar e armazenar os valores do vetor:
        printf("\t___COMPACTAR UM VETOR___\n");
        printf("Digite os valores de 15 elementos: ");
        for (i = 0; i < 15; i++)
        {
                scanf("%d", &vetor[i]); // Armazenando...
        }

        compacta(vetor, &indice); // Chamada da função compacta().

        //  Imprimir os elementos do vetor compactado:
        printf("\n\t__VETOR COMPACTO__\n");
        for (i = 0; i < (15 - indice); i++)
        {
                printf("%d ", vetor[i]);
        }

        return (0);
}
// Vetor para verificar e retirar todos os zeros:
void compacta(int *vetor, int *indice)
{
        //  Declaração de variáveis:
        int i, j, n;

        // Verificar e deslocar elementos quando i == 0:
        for (i = 0; i < 15; i++)
        {
                if (*(vetor + i) == 0) // Condição para deslocar elementos:
                {
                        for (j = i; j < 14; j++)
                        {
                                *(vetor + j) = *(vetor + (j + 1));
                        }
                        (*indice)++;
                        i--;
                }
        }
}
