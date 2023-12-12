/* 32. Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que não são
múltiplos de 7 ou que terminam com 7. */
#include <stdio.h>

// Declaração do protótipo da função:
void preenche(int *vet);

int main(void)
{
        // Declaração das variáveis:
        int vet[100], i;

        preenche(vet); // Chamada da função preenche().

        // Imprimir todos os elementos do vetor:
        for (i = 0; i < 100; i++)
        {
                printf("%d  ", vet[i]);
        }
        printf("\n");

        return (0);
}

// Função para preencher o vetor:
void preenche(int *vet)
{
        // Declaração de variáveis:
        int i, count = 0;

        for (i = 0; i < 100; i++)
        { // Condições para o elemento ser armazenado no vetor:
                if (count % 7 != 0 && (count - 7) % 10 != 0)
                {
                        *(vet + i) = count;
                }
                else
                {
                        i--;
                }
                count++;
        }
}
