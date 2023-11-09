/* 2. Ler um vetor de 8 posições e 2 valores X e Y, utilizando a função procurar() veja
se os 2 valores estão no vetor. Escrever os valores, se encontrados, e quais as
posições que X e Y estão no vetor. */
#include <stdio.h>

int procurar(float x, float y, float vet[]);

int main(void)
{
    // Declaração de variáveis:
    float vet[8], x, y;

    // Solicita e armazena os 8 valores numéricos:
    printf("__ENCONTRE NO VETOR__\n");
    printf("Digite 8 numeros: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%f", &vet[i]); // Entrada dos valores.
    }

    // Solicita os dois valores X e Y:
    printf("\nDigite o valor X: ");
    scanf("%f", &x); // Entrada do X;
    printf("Digite o valor Y: ");
    scanf("%f", &y); // Entrada do Y.
    printf("\n");

    // Chamar a função procurar:
    procurar(x, y, vet);

    return (0);
}

// Função que procura e imprime(se tiver), os valores de X e Y:
int procurar(float x, float y, float vet[])
{
    // Declaração de variáveis:
    float a = 0, b = 0;

    // Procura por X e Y nos vetores:
    for (int i = 0; i < 8; i++)
    {
        if (vet[i] == x) // Procura por X;
        {
            printf("\n O valor de X eh: %.2f\n A posicao de ""X"" eh: %d\n", x, i);
            a++;
        }
        else if (vet[i] == y) // Procura por Y;
        {
            printf("\n O valor de Y eh: %.2f\n A posicao de ""Y"" eh: %d\n", y, i);
            b++;
        }
    }
    // Verificação se encontrou ou não X e Y no vetor:
    if (a == 0) // Imprimir se não encontrar o X;
    {
        printf("\n O valor de X (%.2f) nao foi encontrado dentro da sequencia!!\n", x);
    }
    if (b == 0) // Imprimir se não encontrar o Y;
    {
        printf("\n O valor de Y (%.2f) nao foi encontrado dentro da sequencia!!\n", y);
    }
}
