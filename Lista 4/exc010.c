/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/11/2023
---------------------------------------------------------------------------
10) Escreva a versão iterativa da função MaximoR. */
#include <stdio.h>

float maximoR(float *vet, int i, float x)
{
    if (i == 0)
    {
        return vet[0];
    }
    else
    {
        x = maximoR(vet, i - 1, x);
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
int main(void)
{
    float vet[10];
    int i;

    printf("Digite 10 valores numericos: ");
    for (i = 0; i < 10; i++)
    {
    scanf("%f", (vet + i));
    }

    printf("\n O maior valor digitado foi: %.2f", maximoR(vet, 9, 0));

    return (0);
}