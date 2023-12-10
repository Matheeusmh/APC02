/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/11/2023
---------------------------------------------------------------------------
3) Implemente uma função recursiva que imprima 
de 0 a n. */
#include <stdio.h>

int imprimir(int num);
int main(void)
{
    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    imprimir(num);

    return (0);
}

int imprimir(int num)
{
    if (num >= 0)
    {
        imprimir(num - 1);
        printf("%d  ", num);
    }
}
