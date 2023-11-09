/* 9. Ler 2 conjuntos de 15 números reais, use a função armazena() para guardar
cada conjunto em um vetor diferente. Utilizando a função escalar() calcule o
produto escalar entre eles, dado por x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn. A função
imprimir() imprimirá, usando ponteiros, os dois vetores e o produto escalar. */
#include <stdio.h>

void armazenar(float *vet1, float *vet2);
void produto_escalar(float *produto, float *vet1, float *vet2);
void imprimir(float *vet1, float *vet2, float *produto);

int main(void)
{
    // Declaração de variáveis:
    float vet1[15], vet2[15], produto = 0;

    armazenar(vet1, vet2);                 // Chamando a função armazenar();
    produto_escalar(&produto, vet1, vet2); // Chamando a função produto_escalar();
    imprimir(vet1, vet2, &produto);        // Chamando a função imprimir().

    return (0);
}

// Função para armazenar os valores dos elementos do primeiro e segundo vetor:
void armazenar(float *vet1, float *vet2)
{
    // Solicitar e armazenar os 15 valores do primeiro vetor:
    printf("\t___PRIMEIRO VETOR___\n");
    printf("Digite 15 valores reais para o primeiro vetor: ");
    for (int i = 0; i < 15; i++)
    {
        scanf("%f", &vet1[i]); // Armazenar.
    }

    // Solicitar e armazenar os 15 valores do segundo vetor:
    printf("\n\t___SEGUNDO VETOR___\n");
    printf("Digite 15 valores reais para o segundo vetor: ");
    for (int i = 0; i < 15; i++)
    {
        scanf("%f", &vet2[i]); // Armazenar.
    }
}

// Função para calcular o produto escalar entre os vetores:
void produto_escalar(float *produto, float *vet1, float *vet2)
{
    for (int i = 0; i < 15; i++)
    {
        *produto += (vet1[i] * vet2[i]); // Cálculo.
    }
}

// Função para imprimir os vetores e o produto escalar:
void imprimir(float *vet1, float *vet2, float *produto)
{
    // Imprimir o primeiro vetor:
    printf("\n\t__VETOR 1__\n");
    for (int i = 0; i < 15; i++)
    {
        printf("%.2f  ", vet1[i]);
    }

    // Imprimir o segundo vetor:
    printf("\n\n\t__VETOR 2__\n");
    for (int i = 0; i < 15; i++)
    {
        printf("%.2f  ", vet2[i]);
    }

    // Imprimir o produto escalar:
    printf("\n\nProduto escalar: %.2f\n", *produto);
}
