/* Implemente um programa para trocar valores lidos na função:
(a) Imprimir antes da chamada da função;
(b) Imprimir dentro da função após a troca;
(c) Imprimir quando volta ao main().
obs.: Agora, use ponteiros.*/
#include <stdio.h>

void troca(int a, int b);
void troca2(int *a, int *b);

int main(void)
{
    int num1, num2;

    printf("Digite dois valores: ");
    scanf("%d %d", &num1, &num2);

    printf("\n O primeiro valor eh: %d\n O segundo valor eh: %d\n", num1, num2);

    troca(num1, num2);
    printf("\n-Depois de chamar a funcao:\n");
    printf("\tNumero 1: %d\n\tNumero 2: %d\n", num1, num2);

    troca2(&num1, &num2);
    printf("\n-Troca com ponteiros:");
    printf("\n\tNumero 1: %d\n\tNumero 2: %d\n", num1, num2);

    return 0;
}

void troca(int a, int b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;

    printf("\n-Troca de valores na funcao:\n");
    printf("\tNumero 1: %d\n\tNumero 2: %d\n", a, b);
}

void troca2(int *a, int *b)
{
    int aux = *b;
    *b = *a;
    *a = aux;
}
