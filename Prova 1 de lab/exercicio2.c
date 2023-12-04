#include <stdio.h>
#include <stdlib.h>

// Declaração dos protótipos de função:
void cadastra(int *vet_1, int *vet_2);
void repetidos(int *vet_1, int *vet_2, int *vet_repetidos, int *count);
void imprime(int *vet_1, int *vet_2, int *vet_repetidos, int *count);

int main(void)
{
    // Declaração de variáveis:
    int vet_1[10], vet_2[10], vet_repetidos[10], count = 0;

    cadastra(vet_1, vet_2);                         // Chamada da função cadastra();
    repetidos(vet_1, vet_2, vet_repetidos, &count); // Chamada da função repetidos();
    imprime(vet_1, vet_2, vet_repetidos, &count);   // Chamada da função imprime().

    return (0);
}

// Função para a entrada dos dois vetores:
void cadastra(int *vet_1, int *vet_2)
{
    // Declaração de variável:
    int i;

    // Solicitar e armazenar os valores do primeiro vetor:
    printf("\t___REPETIDOS___\n");
    printf("Digite os valores do primeiro vetor: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", vet_1++); // Armazenar...
    }

    fflush(stdin);

    // Solicitar e armazenar os valores do segundo vetor:
    printf("\nDigite os valores do segundo vetor: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", vet_2++); // Armazenar...
    }
}
// Função para localizar e armazenar os valores que se repetem nos vetores:
void repetidos(int *vet_1, int *vet_2, int *vet_repetidos, int *count)
{
    // Declaração de variáveis:
    int i, j, z = 0, m;

    // Looping para passar por todos elementos do primeiro/segundo vetor e armazenar os repetidos:
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (*(vet_1 + i) == *(vet_2 + j)) // Caso os valores sejam iguais:
            {
                *(vet_repetidos + z++) = *(vet_2 + j); // Armazena o valor em um terceiro vetor:
                (*count)++;
            }
        }
    }
}

// Imprime os vetores:
void imprime(int *vet_1, int *vet_2, int *vet_repetidos, int *count)
{
    // Declaração de variáveis:
    int i;

    // Imprimir os elementos do primeiro vetor:
    printf("\n\t__PRIMEIRO VETOR__ \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", *(vet_1++));
    }

    // Imprimir os elementos do segundo vetor:
    printf("\n\n\t__SEGUNDO VETOR__ \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", *(vet_2++));
    }

    // Imprimir os elementos repetidos:
    printf("\n\n__Valores REPETIDOS nos dois vetores__\n");
    for (i = 0; i < *count; i++)
    {
        printf("%d  ", *(vet_repetidos++));
    }
    printf("\n");
}
