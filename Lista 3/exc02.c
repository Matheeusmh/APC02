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

// Declaração do protótipo da função:
void exibir(int *vetor);

int main(void)
{
    // Declaração de variáveis:
    int vetor[20], i;

    // Solicitando e armazenando os valores do vetor:
    printf("Digite 20 valores: ");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]); // Armazenando...
    }

    exibir(vetor); // Chamada da função exibir().

    system("pause");
}

// Função para analisar e exibir dados solicitados:
void exibir(int *vetor)
{
    system("cls"); // Limpa a tela.

    // Declaração de variáveis:
    int i = 0, soma = 0, count = 0;

    // Imprimindo valores digitados:
    printf("\t__DADOS__\n  Os valores digitados foram: \n");
    for (i = 0; i < 20; i++)
    {
        printf("%d  ", *(vetor + i));
    }

    // Imprimindo os valores pares digitados e a sua soma:
    printf("\n\n Numeros pares digitados: \n");
    for (i = 0; i < 20; i++)
    {
        if (*(vetor + i) % 2 == 0) // Condição para ser um valor par.
        {
            printf("%d  ", *(vetor + i));
            soma += *(vetor + i); // Soma dos valores pares.
        }
    }
    printf("\n Soma dos numeros pares digitados: %d", soma); // Imprimindo a soma dos valores pares.

    // Imprimindo os valores impares digitados e a quantidade de valores ímpares no vetor:
    printf("\n\n Numeros IMPARES digitados: \n");
    for (i = 0; i < 20; i++)
    {
        if (*(vetor + i)% 2 != 0) // Condição para ser um valor ímpar.
        {
            printf("%d  ", *(vetor + i));
            count++; // Contador para valores ímpares.
        }
    }
    printf("\n Quantidade de numeros impares digitados: %d\n\n", count); // Imprimindo a quantidade de valores ímpares.
}
