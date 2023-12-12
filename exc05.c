/* 05. Ler um conjunto de números reais, armazenando-os em vetor, enviá-los para a
função quadrado() e calcular o quadrado de cada número, armazenando o
resultado em outro vetor. Os vetores têm 10 elementos cada. Imprimir todos
os vetores por meio da função imprimir(). */
#include <stdio.h>
#include <math.h>

int quadrado(float *num, float *elevado);
int elevado(float *num, float *elevado);

int main(void)
{
    // Declaração de variáveis:
    float num[10], elevado[10];

    // Solicitar a entrada dos 10 valores para o vetor:
    printf("___CALCULAR O QUADRADO___\n");
    printf("Digite 10 valores reais: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &num[i]); // Entrada de dados.
    }

    // Chamada de funções:
    quadrado(num, elevado); // Calcular e armazenar os valores ao quadrado;
    imprimir(num, elevado); // Imprimir o vetor com os valores de entrada e ao quadrado.

    return (0);
}

// Calcula e armazena valores ao quadrado:
int quadrado(float *num, float *elevado)
{
    for (int i = 0; i < 10; i++)
    {
        elevado[i] = pow(num[i], 2); // Elevando valor de entrada ao quadrado.
    }
}

// Imprime ambos os vetores(original e ao quadrado):
int imprimir(float *num, float *elevado)
{ 
    // Imprimir o vetor com os valores originais:
    printf("\n\t__VALORES DIGITADOS__\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f  ", num[i]);
    }
    // Imprimir o vetor com valores ao quadrado:
    printf("\n\n\t__VALORES AO QUADRADO__\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f  ", elevado[i]);
    }
    printf("\n");
}
