/* 32. Leia 10 números inteiros e armazene em um vetor. Por meio da função primo() e utilizando ponteiros imprima
na tela os elementos que são primos e suas respectivas posições no vetor. */
#include <stdio.h>

// Declaração do protótipo de função:
void primo(int *vetor);

int main(void)
{
    // Declaração de variáveis:
    int vet[10], i;

    // Solicita e armazena os valores do vetor:
    printf("___VALORES PRIMOS___\n");
    printf("Digite 10 valores inteiros: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]); // Armazenando valores...
    }

    primo(vet); // Chamada da função primo().

    return (0);
}

// Função para verificar se um valor é primo:
void primo(int *vetor)
{
    // Declaração de variáveis:
    int i, j, count;

    // Verificando e imprimindo os valores primos/suas posições:
    printf("\n\t__INFORMACOES__\n");
    for (i = 0; i < 10; i++)
    {
        count = 0;
        for (j = 1; j <= *(vetor + i); j++)
        {
            if (*(vetor + i) % j == 0)
            {
                count++;
            }
        }
        if (count == 2 && *(vetor + i) != 1) // Condição para ser um número primo...
        {
            printf("O valor %d eh um numero primo e se encontra na posicao %d\n!", *(vetor + i), i);
        }
    }
}
