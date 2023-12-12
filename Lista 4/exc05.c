/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/12/2023
---------------------------------------------------------------------------
5) Faça uma função recursiva que imprima um
inteiro usando recursão. */
#include <stdio.h>
#include <stdlib.h>

// Declaração do protótipo da função:
void imprime_inteiro(int num);

int main(void)
{
        // Declaração de variável:
        int num;

        // Solicitar e armazenar um valor inteiro:
        printf("\t___IMPRIMIR UM VALOR INTEIRO___\n");
        printf("Digite o numero inteiro a ser impresso: ");
        scanf("%d", &num); // Armazenar...

        // Imprimir o valor inteiro com recursão:
        printf("\n\t__NUMERO__\n");
        imprime_inteiro(num); // Chamada da função imprime_inteiro().
        printf("\n");

        return (0);
}

// Função recursiva para imprimir um valor inteiro:
void imprime_inteiro(int num)
{
        if(num < 10) // Condição de paradada.
        {
                printf("%d", num);
        }
        else
        {
                imprime_inteiro(num / 10); // Chamada da função até a condição de parada.
                printf("%d", num % 10); // Imprimir durante a recursão.
        }
}
