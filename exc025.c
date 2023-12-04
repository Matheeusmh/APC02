// Realizar o cálculo do fatorial com recursão e ponteiros:
#include <stdio.h>

int fatorial(int n, int *resultado)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        fatorial(n - 1, resultado);
        *resultado *= n;
    }
}
int main(void)
{
    int n, resultado = 1;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    fatorial(n, &resultado);

    printf("Fatorial: %d", resultado);

    return(0);
}