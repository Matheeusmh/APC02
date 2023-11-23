/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 20/11/2023
---------------------------------------------------------------------------
2.Faça um programa que receba 20 números inteiros e, utilizando a função exibir(), mostre: Os números pares
digitados; A soma dos números pares digitados; Os números ímpares digitados; A quantidade de números
ímpares digitados. Acesse o vetor utilizando ponteiros. */
#include <stdio.h>
#include <stdlib.h>

void exibir(int *vetor);

int main(void)
{
    int vetor[20], i;

    printf("Digite 20 valores: ");

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }

    exibir(vetor);
    system("pause");
}

void exibir(int *vetor)
{
    system("cls");
    int i = 0, soma = 0, count = 0;

    printf("\n\t__DADOS__\n Os valores digitados foram: \n");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", *(vetor + i));
    }
    printf("\n\n Numeros pares digitados: ");
    for (i = 0; i < 20; i++)
    {
        if (*(vetor + i) % 2 == 0)
        {
            printf("%d ", *(vetor + i));
            soma += *(vetor + i);
        }
    }
    printf("\n Soma dos numeros pares digitados: %d", soma);

    printf("\n\n Numeros IMPARES digitados: \n");
    for (i = 0; i < 20; i++)
    {
        if (*(vetor + i)% 2 != 0)
        {
            printf("%d ", *(vetor + i));
            count++;
        }
    }
    printf("\n Quantidade de numeros impares digitados: %d\n\n", count);
}
