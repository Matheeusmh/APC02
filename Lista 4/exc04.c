/* 4) Implemente uma função recursiva que faça a 
soma de N números.
– Ex.: n=5 soma-se: 5+4+3+2+1=15 */
#include <stdio.h>

int soma(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + soma(n - 1);
    }
}
int main(void)
{
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    n = soma (n);

    printf("%d", n);

    return (0);
}
