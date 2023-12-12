/* 40.Faça um programa que leia dois vetores de 10 elementos. Crie um terceiro vetor, ainda no main(), que seja a
intersecção entre os 2 vetores anteriores, ou seja, que contêm apenas os números que estão em ambos os
vetores, não devendo conter números repetidos. A verificação da intersecção e armazenamento no vetor deve
ser feito por meio da função intersecção() e os vetores manipulados nessa função com ponteiros. */
#include <stdio.h>
#include <stdlib.h> 

// Declaração do protótipo de função:
void interceccao(int *vet1, int *vet2, int *vet3, int *indice);

int main(void)
{
    // Declaração de variáveis:
    int vetor1[10], vetor2[10], vetor3[10], i, indice = 0;

    // Solicitando e armazenando os valores do  primeiro vetor:
    printf("\t___INTERSECCAO___\n");
    printf("Digite os elementos do primeiro vetor: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor1[i]); // Armazenando valor...
    }

    // Solicitando e armazenando os valores do segundo vetor:
    printf("\nDigite os elementos do segundo vetor: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor2[i]); // Armazenando valor...
    }

    interseccao(vetor1, vetor2, vetor3, &indice); // Chamada da função interceccao.

    // Imprimindo o terceiro vetor(intersecção entre os dois primeiros vetores):
    printf("\nVetor 3: ");
    for (i = 0; i < indice; i++)
    {
        printf("%d  ", vetor3[i]);
    }
    printf("\n");
    
    return (0);
}

// Função para verificar e armazenar a intersecção 
void interseccao(int *vet1, int *vet2, int *vet3, int *indice)
{
    // Declaração de variáveis:
    int i, j, z, count;
    
    // Verificando a existência de valores em ambos os vetores:
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            count = 0;
            for (z = 0; z < i; z++)
            {
                if (*(vet1 + i) == *(vet1 + z) && i != z)
                {
                    count++;
                    break;
                }
            }
            for (z = 0; z < j; z++)
            {
                if (*(vet2 + j) == *(vet2 + z) && z != j)
                {
                    count++;
                    break;
                }
            }
            if (*(vet1 + i) == *(vet2 + j) && count == 0)
            { // Armazenando os valores que estão presentes em ambos os vetores:
                *vet3 = *(vet1 + i);
                vet3++;
                (*indice)++;
            }
        }
    }
}
