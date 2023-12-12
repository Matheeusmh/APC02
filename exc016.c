/* 16. Troque o valor de A = 1 e B = 0 em uma função usando ponteiros. Imprima o resultado. */
#include <stdio.h>

void troca(int *a, int *b);

int main(void)
{
    int a = 1, b = 0;

    troca(&a, &b);

    printf("A = %d\nB = %d\n", a, b);

    return (0);
}

void troca(int *a, int *b)
{
    int aux = 0;

    aux = *a;
    *a = *b;
    *b = aux;
}
