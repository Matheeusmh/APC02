/* 08. Faça um programa que recebe do usuário o vetor com 10 posições, com o uso da
função imprimir() mostre o maior, o menor elemento do vetor e quais suas
posições. Na função imprimir() o vetor é manipulado com o uso de ponteiros. */
#include <stdio.h>

void imprimir(float *vet, float *menor, float *maior);

int main(void)
{
    // Declaração de variáveis:
    float vet[10], menor, maior;

    // Solicitação, entrada e comparação dos valores(menor e maior):
    printf("___COMPARE OS VALORES__\n");
    printf("Digite 10 valores numericos: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vet[i]);
        if (i == 0)
        {
            maior = vet[i];
            menor = vet[i];
        }
        if (maior < vet[i]) // Verificar qual é o maior;
        {
            maior = vet[i];
        }
        else if (menor > vet[i]) // Verificar qual é o menor.
        {
            menor = vet[i];
        }
    }

    imprimir(vet, &menor, &maior); // Chamar a função imprimir().

    return (0);
}

// Função para imprimir o menor valor, o maior valor e suas posições:
void imprimir(float *vet, float *menor, float *maior)
{
    printf("\n\t__DADOS__");
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] == *maior) // Achando e imprimindo a posição do maior valor(e o valor):
        {
            printf("\n  O MAIOR valor eh: %.2f\n  Sua posicao eh: %d\n", vet[i], i);
        }
        else if (vet[i] == *menor) // Achando e imprimindo a posição do menor valor(e o valor):
        {
            printf("\n  O MENOR valor eh: %.2f\n  Sua posicao eh: %d\n", vet[i], i);
        }
    }
}
