// Realizar o cálculo do fatorial com resursão:
#include <stdio.h>

int fatorial(int resultado);

int main(void)
{
    int n, resultado;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &n);

    resultado = n;
    
    printf("O fatorial de %d eh: %d", n, fatorial(resultado));

    return (0);
}

int fatorial(int resultado)
{
    if (resultado == 1)
    {
        return resultado;
    }
    else 
    {
        return (resultado *= fatorial(resultado - 1));
    }
}
