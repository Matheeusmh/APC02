#include <stdio.h>

int main (void)
{
    int numero, *a, **z;

    numero = 55;
    a = &numero;
    z = a;
    
    printf("\nValor inicial: %d\n", numero);

    *a = 100;

    printf("\nValor final: %d\n", numero);
    printf("\nEndereco de ""a"": %d\n", &a);
    printf("\nEndereco do numero: %d\n", a);
    printf("\nConteudo do numero: %d\n", *a);
    printf("\n%d\n", &z);
    printf("\n%d\n", z);
    printf("\n%d\n", *z);

    return (0);
}
