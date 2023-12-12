/* 23. Escreva um programa que lê três números inteiros do teclado e, utilizando uma função e
acessando os números no vetor por meio de ponteiros, ordene os três números e imprima-os
em ordem crescente. */
#include <stdio.h>

// Declaração do protótipo de função:
void ordenar(int *vet);

int main(void)
{
    // Declaração de variáveis:
    int vet[3], i;

    // Solicitar e armazenar os 3 valores do vetor:
    printf("___ORDENAR ELEMENTOS EM ORDEM CRESCENTE___\n");
    printf("Digite 3 valores inteiros: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &vet[i]); // Armazenando valores.
    }

    // Imprimir os 3 valores na ordem digitada:
    printf("\nA ordem digitada foi: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", vet[i]);
    }

    ordenar(vet); // Chamada da função ordenar().

    // Imprimir a ordem crescente dos 3 valores:
    printf("\nA ordem crescente eh: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return (0);
}

// Função para ordenar os 3 valores em ordem crescente:
void ordenar(int *vet)
{
    // Declaração de variáveis:
    int i, aux;

    // Condições para posicionar elementos:
    if (*vet > *(vet + 1) || *vet > *(vet + 2)) // Primeiro elemento ser o maior de todos:
    {
        if (*vet  > *(vet + 2))
        {
            aux = *(vet + 2);
            *(vet + 2) = *vet;
            *vet = aux;
        }

        if (*vet > *(vet + 1)) // Primeiro elemento ser maior que o segundo.
        {
            aux = *vet;
            *vet = *(vet + 1);
            *(vet + 1) = aux;
        }
    }
    else
    {
        if (*(vet + 1) > *(vet + 2)) // Segundo elemento ser maior que o terceiro:
        {
            aux = *(vet + 1);
            *(vet + 1) = *(vet + 2);
            *(vet + 2) = aux;
        }
    }
}
