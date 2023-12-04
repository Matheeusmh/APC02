#include <stdio.h>

int soma(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num + soma(num - 1);
    }
}

int main(void)
{
    int num;

    printf("Digite um numero para somar com os seus anteriores: ");
    scanf("%d", &num);

    printf("%d", soma(num));

    return (0);
}
