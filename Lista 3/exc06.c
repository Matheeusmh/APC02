/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 22/11/2023
---------------------------------------------------------------------------
6. Implemente um programa que faça o cálculo da média e da variância de um conjunto de 10 números
reais. Implementação: Os valores são lidos e armazenados em um vetor de 10 posições. Os cálculos da
média e da variância são efetuados sobre o conjunto de valores armazenados no vetor. O vetor deve ser
passado para a função media(), o parâmetro do vetor deve ser recebido como ponteiro, onde será
calculado a média e retornará o valor da mesma. Após os valores são também passados para a função
variância(). Ex: O treinador registrou em uma tabela os tempos de três atletas após realizarem o mesmo
percurso em 5 dias diferentes. A variância é uma medida de dispersão que permite identificar a distância
em que os tempos de cada atleta estão de um valor médio. */
#include <stdio.h>
#include <math.h>

float calcular_media(float *vetor)
{
    float media;
    int i;

    for (i = 0; i < 10; i++)
    {
        media += *(vetor + i);
    }

    return (media / 10);
}
float calcular_variancia(float *vetor, float *media)
{
    float variancia = 0.0;
    int i;

    for (i = 0; i < 10; i++)
    {
        variancia += pow((*(vetor + i) - media), 2);
    }
    return (variancia / 9);
}
int main(void)
{
    float vet[10], media, variancia;
    int i; 

    printf("Digite os 10 valores do vetor: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &vet[i]);
    }

    media = calcular_media(vet);
    variancia = calcular_variancia(vet, &media);

    printf("\n\t__DADOS__\n");
    printf("A media eh: %f\nA variancia eh: %f", media, variancia);

    return (0);
}
