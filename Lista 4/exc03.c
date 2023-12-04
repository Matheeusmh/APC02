/* 3) Implemente uma função recursiva que imprima 
de 0 a n. */
#include <stdio.h>

int imprimir(int num)
{
    if (num >= 0)
    {
        imprimir(num - 1);
        printf("%d  ", num);
    }
}
int main(void)
{
    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    imprimir(num);

    return (0);
}
