/* 1) Faça um programa que dado um número n,
informado pelo usuário, faça a soma com todos os
seus antecessores pares e com ele, se ele for par.
– Ex.: n=4 soma-se: 2+4=6; n=6 soma-se: 2+4+6=12 */
#include <stdio.h>

int soma_par(int num, int *soma)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        if (num % 2 == 0)
        {
            *soma += num;
        }
        soma_par(num - 1, soma);
    }
}
int main(void)
{
    int num, soma;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    soma_par(num, &soma);

    printf("Soma = %d", soma);

    return (0);
}
