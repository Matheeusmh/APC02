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

// Declaração do protótipo da função:
int soma_par(int num, int *soma);

int main(void)
{
    // Declaração de variáveis:
    int num, soma;

    // Solicitar e armazenar o valor de num:
    printf("\t___SOMAR OS VALORES PARES ANTECESSORES___\n");
    printf(" Digite um valor inteiro: ");
    scanf("%d", &num); // Armazenando...

    soma_par(num, &soma); // Chamada da função soma_par().

    printf(" A soma dos antecessores pares eh: %d \n", soma); // Imprimir o resultado da soma dos antecessores de num.

    return (0);
}

// Função para somar os valores pares antecessores de num e o próprio se for par:
int soma_par(int num, int *soma)
{

    if (num == 0) // Condição de parada da chamada de função:
    {
        return 0; // Retorno do valor de num.
    }
    else
    {
        soma_par(num - 1, soma); // Chamada da função soma_par.

        if (num % 2 == 0) // Condição para ser par:
        {
            *soma += num; // Armazenar os valores pares somados em uma variável na volta da recursão.
        }
    }
}
