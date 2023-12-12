// 24. Realizar o cálculo do fatorial com recursão e ponteiros:
#include <stdio.h>

int fatorial(int n, int *resultado);

int main(void)
{
    int n, resultado = 1;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    fatorial(n, &resultado);

    printf("Fatorial: %d\n", resultado);

    return(0);
}

int fatorial(int n, int *resultado)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        fatorial(n - 1, resultado);
        *resultado *= n;
    }
}