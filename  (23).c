/* 28. Realize o cálculo da pontência usando recursão.*/
#include <stdio.h>

int pow(int base, int expo, int aux);

int main(void)
{
    int base, expo;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expo);

    printf("\n  Resultado: %d\n", pow(base, expo, 1));

    return (0);
}

int pow(int base, int expo, int aux)
{
    if (aux == expo)
    {
        return base;
    }
    else
    {
        return base * pow(base, expo, aux + 1);
    }
}
