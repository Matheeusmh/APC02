/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 22/11/2023
---------------------------------------------------------------------------
12. Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que não são
múltiplos de 7 ou que terminam com 7. */
#include <stdio.h> 

void preenche(int *vet)
{
        int i, count = 0;
        
        for (i = 0; i < 100; i++)
        {
                if (count % 7 != 0 && (count - 7) % 10 != 0)
                {
                        *(vet + i) = count;
                }
                else
                {
                        i--;
                }

                count++;
        }
}
int main(void)
{
        int vet[100], i;

        preenche(vet);

        for (i = 0; i < 100; i++)
        {
                printf("%d  ", vet[i]);
        }

        return(0);
}
