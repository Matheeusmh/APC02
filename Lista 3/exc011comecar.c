
/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma: IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 22/11/2023
---------------------------------------------------------------------------
15. Construa um programa que receba da linha de comando, por meio do argc argv, um número inteiro e
retorne seu fatorial na saída padrão, o qual é calculado por uma função denominada fat(). O número deve
ser enviado e manipulado na função como ponteiro. */

#include <stdio.h>
#include <stdlib.h>

int fat(int *resultado, int *num)
{
        if (*num == 1)
        {
                *resultado = 1;
        }
        else
        {
                (*num)--;
                fat(resultado, num);
                *resultado *= (*num + 1);
        }
}

/*int main(int argc, char *argv[])
{
    int num = atoi(argv[1]);

    fat(&num);

    printf("%d", num);
}*/

int main(void)
{
        int num, resultado;
        scanf("%d", &num);
        resultado = num;fat(&resultado, &num);
        printf("%d", resultado);

        return (0);
}
