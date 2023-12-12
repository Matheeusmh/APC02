/* 09. Leia um vetor com 20 números inteiros. Crie a função repetidos() para acessar os
elementos do vetor e imprimir eliminando os números repetidos. */
#include <stdio.h>

void repetidos(int vet[]);

int main(void)
{
    // Declaração de variável:
    int vet[20];

    // Solicitação e entrada dos 20 valores do vetor:
    printf("___ELIMINANDO REPETIDOS___\n");
    printf("Digite 20 valores numericos: ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vet[i]); // Armazenar.
    }

    repetidos(vet); // Chamando a função repetidos().

    return (0);
}

// Função para imprimir os valores do vetor eliminando os repetidos:
void repetidos(int vet[])
{
    // Declaração de variáveis:
    int count = 0;

    // Imprimir os valores eliminando os repetidos:
    printf("\n __SEM REPETIDOS__\n ");
    for (int i = 0; i < 20; i++)
    {
        count = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (vet[i] == vet[j]) // Verificar se o valor é repetido;
            {
                count++;
                break;
            }
        }
        if (count == 0) // Verificando se o valor já foi impresso.
        {
            printf("%d ", vet[i]);
        }
    }
    printf("\n");
}
