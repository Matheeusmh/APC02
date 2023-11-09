/* 8. Leia 2 vetores de 10 posições e, usando a função armazena() grave em um
terceiro vetor os valores contendo nas posições pares os elementos do 1º
vetor e nas ímpares os valores do 2º vetor. Uso ponteiros para isso. */
#include <stdio.h>

void armazena(float *vet1, float *vet2, float *vet3);

int main(void)
{
    // Declaração de variáveis:
    float vet1[10], vet2[10], vet3[20];

    // Solicita e armazena os valores do primeiro vetor:
    printf("\t___PRIMEIRO VETOR___\n");
    printf("Digite 10 valores para o primeiro vetor: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vet1[i]); // Armazenar.
    }

    // Solicita e armazena os valores do segundo vetor:
    printf("\n\t___SEGUNDO VETOR___");
    printf("\nDigite 10 valores para o segundo vetor: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vet2[i]); // Armazenar.
    }
    printf("\n");

    armazena(vet1, vet2, vet3); // Chamando função armazena().

    // Imprimir o terceiro vetor:
    printf("\t___TERCEIRO VETOR___\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%.2f  ", vet3[i]);
    }
    printf("\n");

    return (0);
}

// Função para armazenar o primeiro(posição par) e segundo(posição ímpar) vetor em um terceiro:
void armazena(float *vet1, float *vet2, float *vet3)
{
    // Declaração de variáveis:
    int a = 0, b = 0;

    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0) // Armazena os elementos do primeiro vetor nas posições pares do terceiro;
        {
            vet3[i] = vet1[a++];
        }
        else if (i % 2 != 0) // Armazena os elementos do segundo vetor nas posições ímpares do terceiro.
        {
            vet3[i] = vet2[b++];
        }
    }
}
