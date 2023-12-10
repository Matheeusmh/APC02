/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/12/2023
---------------------------------------------------------------------------
4) Implemente uma função recursiva que faça a
soma de N números.
– Ex.: n=5 soma-se: 5+4+3+2+1=15 */
#include <stdio.h>

// Declaração do protótipo da função:
int soma(int n);

int main(void)
{
    // Declaração de variável:
    int n;

    // Solicitar e armazenar o valor de n:
    printf("\t___SOMAR OS N VALORES___\n");
    printf("  Digite um valor inteiro: ");
    scanf("%d", &n); // Armazenando...

    printf("  Soma: %d\n", soma(n)); // Chamar e imprimir o retorno da função soma().

    return (0);
}

// Função para somar os N valores:
int soma(int n)
{
    if (n == 1) // Condição de parada.
    {
        return 1; // Retorno...
    }
    else
    {
        return n + soma(n - 1); // Chamada da função soma() e retorno na recursão.
    }
}
