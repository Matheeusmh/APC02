/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 22/11/2023
---------------------------------------------------------------------------
13. Faça um programa que calcule o desvio padrão de um vetor v contendo n=10 números, onde m e a
média do vetor. */
#include <stdio.h>
#include <math.h>

// Declaração do protótipo da função:
void desvio_padrao(double *vet, double *r_desvio_padrao);

int main(void)
{
        // Declaração de variáveis:
        double vet[10], r_desvio_padrao = 0;
        int i;

        // Solicitar e armazenar os 10 valores:
        printf("\t___DESVIO PADRAO___\n");
        printf("Digite 10 valores numericos: ");
        for (i = 0; i < 10; i++)
        {
                scanf("%lf", &vet[i]); // Armazenar...
        }

        desvio_padrao(vet, &r_desvio_padrao); // Chamada da função desvio_padrao().

        // Imprimir o desvio padrão:
        printf("\nDesvio padrao: %.2lf\n", r_desvio_padrao);

        return (0);
}
// Função para calcular o desvio padrão:
void desvio_padrao(double *vet, double *r_desvio_padrao)
{
        // Declaração de variáveis:
        double m = 0, soma = 0;
        int i;

        // Calcular a média:
        for (i = 0; i < 10; i++)
        {
                m += *(vet + i);
        }
        m /= 10;

        // Calcular o desvio padrão:
        for (i = 0; i < 10; i++)
        {
                soma += pow((*(vet + i) - m), 2);
        }
        *r_desvio_padrao = sqrt((soma/(10-1)));
}
