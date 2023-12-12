/* 07. Leia valores para um vetor de 10 posições por meio da função leitura(),
passando o vetor como ponteiro, imprimir quais valores são pares e quais são
ímpares, por meio das funções imprimepar() e imprimeimpar(). */
#include <stdio.h>

void leitura(int *vet[]);
void imprimepar(int *vet);
void imprimeimpar(int *vet);

int main(void)
{
    // Declaração de variável:
    int vet[10];

    // Solicita a entrada de 10 valores:
    printf("___SEPARAR NUMEROS PARES E IMPARES___\n");
    printf("Digite 10 valores: ");

    leitura(vet);      // Chama a função leitura();
    imprimepar(vet);   // Chama a função imprimepar();
    imprimeimpar(vet); // Chama a função imprimeimpar().

    return 0;
}

// Função para armazenar os 10 valores solicitados:
void leitura(int *vet[])
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]); // Entrada de dados.
    }
}

// Função para imprimir os valores pares armazenados no vetor:
void imprimepar(int *vet)
{
    printf("\n  __Numeros pares__\n  ");
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("%d ", vet[i]);
        }
    }
}

// Função para imprimir os valores ímpares armazenados no vetor:
void imprimeimpar(int *vet)
{
    printf("\n\n  __Numeros impares__\n  ");
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] % 2 != 0)
        {
            printf("%d ", vet[i]);
        }
    }
    printf("\n");
}
