/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/11/2023
---------------------------------------------------------------------------
6) Escreva uma função recursiva para calcular o 
valor de uma base x elevada a um expoente y. */
#include <stdio.h>

int potencia(int x, int y);

int main(void)
{
    int x, y, resultado;

    printf("Digite um valor inteiro(base): ");
    scanf("%d", &x);
    printf("Digite um valor inteiro(expoente): ");
    scanf("%d", &y);

    resultado = potencia(x, y);

    printf("%d elevado a %d eh: %d", x, y, resultado);

    return (0);
}

int potencia(int x, int y)
{
    if (y == 1)
    {
        return x;
    }
    else
    {
        return x * potencia(x, y - 1);
    }
}
