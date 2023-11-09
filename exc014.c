/* 7. Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 ∗
i)%(i+ 1), sendo i a posição do elemento no vetor. Em seguida, usando a
função imprima() mostre os valores do vetor. */
#include <stdio.h>

void imprima(int vet[]);

int main(void)
{
    // Declaração de variável:
    int vet[50];

    // Realizar o cálculo:
    for (int i = 0; i < 50; i++)
    {
        vet[i] = (i + 5 * i) % (i + 1);
    }

    imprima(vet); // Chamando a função imprimir.

    return (0);
}

// Função para imprimir o vetor:
void imprima(int vet[])
{
    for (int i = 0; i < 50; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}
