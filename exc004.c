#include <stdio.h>

int fatorial(int num);
int main(void)
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Fatorial: %d\n", fatorial(num));

    return (0);
}

int fatorial(int num)
{
    int fatorial = 1;
    for (int i = num; i > 0; i--)
    {
        fatorial*= i;
    }
    return fatorial;
}
