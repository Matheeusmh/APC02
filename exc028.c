/* 28. Faça uma rotina recursiva para calcular a somatória de todos os número de 1 a N (N será lido do teclado). */
#include <stdio.h>

int soma(int num);

int main(void)
{
    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    printf("A soma de n e seus antecessores eh: %d\n", soma(num));

    return (0);
}

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
