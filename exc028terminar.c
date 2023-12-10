#include <stdio.h>

int pow(int base, int expo, int aux)
{
    if (aux == expo)
    {
        return expo;
    }
    else
    {
        return base * pow(base, expo, aux + 1);
    }
}

int main(void)
{
    int base, expo;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expo);

    printf("%d", pow(base, expo, 0));

    return (0);
}
