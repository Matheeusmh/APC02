/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/12/2023
---------------------------------------------------------------------------
10) Escreva a versão iterativa da função MaximoR. */
#include <stdio.h>

// Declaração do protótipo da função:
float maximoR(float *vet, int i, float x);

int main(void)
{
    // Declaração de variáveis:
    float vet[10];
    int i;

    // Solicitar e armazenar os 10 valores do vetor:
    printf("\t___ENCONTRAR O VALOR MAXIMO___\n");
    printf("Digite 10 valores numericos: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", (vet + i)); // Armazenando...
    }

    printf("\n O MAIOR valor digitado foi: %.2f\n", maximoR(vet, 9, 0)); // Chamada da função maximoR() e impressão do valor máximo.

    return (0);
}

// Função recursiva que retorna o máximo valor do vetor:
float maximoR(float *vet, int i, float x)
{
    if (i == 0) // Condição de parada.
    {
        return vet[0];
    }
    else
    {
        x = maximoR(vet, i - 1, x); // Chamada da função maximoR().

        // Comparação de valores na recursão e retorno do maior:
        if (*(vet + i) < x)
        {
            return x;
        }
        else
        {
            return *(vet + i);
        }
    }
}
