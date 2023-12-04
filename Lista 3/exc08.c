/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 22/11/2023
---------------------------------------------------------------------------
8. Leia um vetor com 10 números reais, ordene os elementos deste vetor utilizando a função ordena() e no
final escreva os elementos do vetor ordenado com o uso da função imprima(). Utilize ponteiros para
acessar os elementos do vetor nas funções. */
#include <stdio.h>

// Declaração dos protótipos das funções:
void ordena(float *vetor);
void imprima(float *vetor);

int main(void)
{
    // Declaração de variáveis:
    float vet[10];
    int i;

    // Solicitar e armazenar os valores do vetor:
    printf("\t___ORDENAR OS VALORES DE UM VETOR___\n");
    printf("Digite os 10 valores reais: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &vet[i]); // Armazenar...
    }

    ordena(vet);  // Chamada da função ordena();
    imprima(vet); // Chamada da função imprima().

    return (0);
}
// Função que organiza em ordem crescentes os valores reais:
void ordena(float *vetor)
{
    // Declaração de variáveis:
    int i, j, z;
    float aux = 0;

    // Colocar em ordem crescente os valores do vetor:
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++) // Compara os valores de posições acima do i:
        {
            z = i;
            if (*(vetor + i) > *(vetor + j))
            {
                aux = *(vetor + j);
                *(vetor + j) = *(vetor + i);
                *(vetor + i) = aux;
            }
        }
    }
}

// Função para imprimir o vetor:
void imprima(float *vetor)
{
    // Declaração de variável:
    int i;

    // Imprime os valores do vetor:
    printf("\n\t__VETOR ORDENADO__\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f  ", *(vetor + i));
    }
    printf("\n");
}
