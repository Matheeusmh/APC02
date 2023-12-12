#include <stdio.h>

int funcao(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        return funcao(n - 1) + n * funcao(n - 2);
    }
}

int main(void)
{
    int n = 4;
    
    printf("Valor: %d\n", funcao(n));

    return (0);
}