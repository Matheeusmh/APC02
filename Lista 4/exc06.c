/* 6) Escreva uma função recursiva para calcular o 
valor de uma base x elevada a um expoente y. */
#include <stdio.h>

int potencia(int x, int y)
{
    if (y == 1)
    {
        return x;
    }
    else
    {
        return x * potencia(x, y - 1);
    }
}

int main(void)
{
    int x, y, resultado;

    printf("Digite um valor inteiro(base): ");
    scanf("%d", &x);
    printf("Digite um valor inteiro(expoente): ");
    scanf("%d", &y);

    resultado = potencia(x, y);

    printf("%d elevado a %d eh: %d", x, y, resultado);

    return (0);
}
