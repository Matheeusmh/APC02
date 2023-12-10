#include <stdio.h>

int fatorial(int num);

int main(void)
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Fatorial: %d \n", fatorial(num));

    return (0);
}

int fatorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * fatorial(num - 1);
    }
}
