/* 25. Implemente um código para realizar a soma do inteiro digitado
com seus antecessores. Use ponteiros.*/
#include <stdio.h>

int soma(int num, int *resultado);

int main(void)
{
    int num, resultado = 0;

    printf("Digite um numero para somar com os seus anteriores: ");
    scanf("%d", &num);

    soma(num, &resultado);

    printf("%d", resultado);

    return (0);
}

int soma(int num, int *resultado)
{
    if (num == 1)
    {
        *resultado += num;
        return 1;
    }
    else
    {
        soma(num - 1, resultado);
        *resultado += num;
    }
}
