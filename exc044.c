/* 44. Faça um programa que receba a entrada utilizando argc argv. Por exemplo, dada uma entrada no
formato (Dia Mês Ano) 28 08 2022 retorne 28 de agosto de 2022. Faça verificação de erros para o número
de parâmetros e para datas não válidas (28 08 2022). */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Declaração de variáveis:
    char *meses[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    int dia = atoi(argv[1]); // Convertendo o caracter para inteiro;
    int mes = atoi(argv[2]); // Convertendo o caracter para inteiro;
    int ano = atoi(argv[3]); // Convertendo o caracter para inteiro;

    // Condição para invalidar datas inexistentes e imprimir as válidas:
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
