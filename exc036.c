/* 36. Implemente um programa que faça o cálculo da média e da variância de um conjunto de 10 números
reais. Implementação: Os valores são lidos e armazenados em um vetor de 10 posições. Os cálculos da
média e da variância são efetuados sobre o conjunto de valores armazenados no vetor. O vetor deve ser
passado para a função media(), o parâmetro do vetor deve ser recebido como ponteiro, onde será
calculado a média e retornará o valor da mesma. Após os valores são também passados para a função
variância(). Ex: O treinador registrou em uma tabela os tempos de três atletas após realizarem o mesmo
percurso em 5 dias diferentes. A variância é uma medida de dispersão que permite identificar a distância
em que os tempos de cada atleta estão de um valor médio. */
#include <stdio.h>
#include <math.h>

// Declaração dos protótipos das funções:
float calcular_media(float *vetor);
float calcular_variancia(float *vetor, float *media);

int main(void)
{
    // Declaração de variáveis:
    float vet[10], media, variancia;
    int i;

    // Solicitar e armazenar os valores do vetor:
    printf("___CALCULAR A MEDIA E VARIANCIA___\n");
    printf("Digite os 10 valores do vetor: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &vet[i]);
    }

    media = calcular_media(vet);                 // Chamada e armazenamento do retorno da função calcular_media();
    variancia = calcular_variancia(vet, &media); // Chamada e armazenamento do retorno da função calcular_variancia().

    // Imprimir a média e variância:
    printf("\n\t__DADOS__\n");
    printf("A media eh: %.2f\nA variancia eh: %.2f\n", media, variancia);

    return (0);
}

// Calcular a média:
float calcular_media(float *vetor)
{
    // Declaração de variáveis:
    float media;
    int i;

    // Looping para somar os valores do vetor:
    for (i = 0; i < 10; i++)
    {
        media += *(vetor + i);
    }

    // Retorna o valor da média:
    return (media / 10);
}

// Função para calcular a variância:
float calcular_variancia(float *vetor, float *media)
{
    // Declaração de variáveis:
    float variancia = 0.0;
    int i;

    // Calcular e retornar o valor da variância:
    for (i = 0; i < 10; i++)
    {
        variancia += pow((*(vetor + i) - *media), 2);
    }
    return (variancia / 9);
}
