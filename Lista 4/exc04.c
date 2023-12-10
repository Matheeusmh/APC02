/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/11/2023
---------------------------------------------------------------------------
4) Implemente uma função recursiva que faça a 
soma de N números.
– Ex.: n=5 soma-se: 5+4+3+2+1=15 */
#include <stdio.h>

int soma(int n);
int main(void)
{
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    n = soma (n);

    printf("%d", n);

    return (0);
}

int soma(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + soma(n - 1);
    }
}
