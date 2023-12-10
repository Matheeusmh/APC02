/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/12/2023
---------------------------------------------------------------------------
1) Faça um programa que dado um número n,
informado pelo usuário, faça a soma com todos os
seus antecessores pares e com ele, se ele for par.
– Ex.: n=4 soma-se: 2+4=6; n=6 soma-se: 2+4+6=12 */
#include <stdio.h>

int soma_par(int num, int *soma);

int main(void)
{
    int num, soma;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    soma_par(num, &soma);

    printf("Soma = %d", soma);

    return (0);
}

int soma_par(int num, int *soma)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        if (num % 2 == 0)
        {
            *soma += num;
        }
        soma_par(num - 1, soma);
    }
}
