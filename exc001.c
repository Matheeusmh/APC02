/* Implemente um programa:
1 Ler 2 números e trocar o valor (Main);*/
#include <stdio.h>

int main(void)
{
    int num1, num2, aux;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("\nO primeiro numero eh: %d\nO segundo numero eh: %d\n\n -Troca de valores:", num1, num2);

    aux = num1;
    num1 = num2;
    num2 =aux;

    printf("\nO primeiro numero eh: %d\nO segundo numero eh: %d\n", num1, num2);

    return 0;
}
