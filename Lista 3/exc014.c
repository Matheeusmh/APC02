/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 22/11/2023
---------------------------------------------------------------------------
14. Faça um programa que receba a entrada utilizando argc argv. Por exemplo, dada uma entrada no
formato (Dia Mês Ano) 28 08 2022 retorne 28 de agosto de 2022. Faça verificação de erros para o número
de parâmetros e para datas não válidas (28 08 2022). */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *meses[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho",
                     "agosto", "setembro", "outubro", "novembro", "dezembro"};
    int dia = atoi(argv[1]);
    int mes = atoi(argv[2]);
    int ano = atoi(argv[3]);

    if (dia > 31 || dia <= 0 || ano < 0 || mes > 12 || mes < 0)
    {
        printf("ERRO! Informacoes invalidas...\n");
    }
    else
    {
        printf("%d de %s de %d", dia, meses[mes - 1], ano);
    }

    return (0);
}

{
    if (*num == 1)
    {
       