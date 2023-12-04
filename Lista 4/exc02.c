/* 1) Faça um programa que dado um número n,
informado pelo usuário, faça a soma com todos os
seus antecessores pares e com ele, se ele for par.
– Ex.: n=4 soma-se: 2+4=6; n=6 soma-se: 2+4+6=12 */
#include <stdio.h>

int fibonacci(int *seq_fibonacci, int tamanho)
{
    int i = 0;

    for (; i < tamanho; i++)
    {
        if (i == 0 || i == 1)
        {
            *(seq_fibonacci + i) = i;
            printf("%d  ", i);
        }
        else
        {
            *(seq_fibonacci + i) = *(seq_fibonacci + (i - 1)) + *(seq_fibonacci + (i - 2));
            printf("%d  ", *(seq_fibonacci + i));
        }
    }
}
int main(void)
{
    int tamanho;

    printf("Digite o numero de termos da sequencia: ");
    scanf("%d", &tamanho);
    
    int seq_fibonacci[tamanho];

    fibonacci(seq_fibonacci, tamanho);

    return (0);
}
