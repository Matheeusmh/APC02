/* 15. Faça um programa que leia o número de inscrição de 10 atletas, sua altura
e peso. Guarde os valores em uma matriz 10x3. Em uma função busca()
encontre o atleta mais baixo, o mais alto, o mais leve e o que tem maior peso,
mostrando o número desses atletas. Use ponteiros para manipular esses
valores na função busca(). */
#include <stdio.h>

void busca(float atleta[][3], float *mais_baixo, float *mais_alto, float *mais_leve, float *mais_pesado);
int repetido(float atleta[][3], int position);

int main(void)
{
    // Declaração de variáveis:
    float atleta[10][3], mais_baixo, mais_alto, mais_leve, mais_pesado;
    int position;

    // Solicitar/armazenar o número de inscrição, altura e peso dos atletas:
    printf("_____CADASTRO DE ATLETAS_____\n");
    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("Digite o numero de inscricao do atleta: ");
            scanf("%f", &atleta[i][0]); // Armazenar o número de inscrição;
            position = i;
        } while (repetido(atleta, position) == 1 || atleta[i][0] < 0); // Condição para ser um número de inscrição válido;

        printf("Digite a altura do atleta %.0f(em m): ", atleta[i][0]);
        scanf("%f", &atleta[i][1]); // Armazenar a altura do atleta;
        printf("Digite o peso do atleta %.0f(em kg): ", atleta[i][0]);
        scanf("%f", &atleta[i][2]); // Armazenar o peso do atleta;
        fflush(stdin);              // Limpando Buffer.
        printf("\n");
    }

    // Imprimir a tabela com os dados dos atletas:
    printf("\n\t__TABELA COMPLETA DOS ATLETAS__\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0) // Número de inscrição;
            {
                printf("\tAtleta %.0f", atleta[i][j]);
            }
            else if (j == 1) // Altura;
            {
                printf("\t%.2f m  ", atleta[i][j]);
            }
            else // Peso.
            {
                printf("\t%.2f kg  ", atleta[i][j]);
            }
        }
        printf("\n");
    }

    busca(atleta, &mais_baixo, &mais_alto, &mais_leve, &mais_pesado); // Chamando a função busca().

    // Imprimindo os dados dos atletas(mais baixo, mais alto, mais leve e mais pesado):
    printf("\n\t\t_____DADOS_____");
    printf("\n\tO atleta MAIS BAIXO eh o de numero: %.0f\n", mais_baixo); // Mais baixo;
    printf("\tO atleta MAIS ALTO eh o de numero: %.0f\n", mais_alto);     // Mais alto;
    printf("\tO atleta MAIS LEVE eh o de numero: %.0f\n", mais_leve);     // Mais leve;
    printf("\tO atleta MAIS PESADO eh o de numero: %.0f\n", mais_pesado); // Mais pesado.

    return (0);
}

// Função para buscar o atleta mais baixo, o mais alto, o mais leve e o mais pesado:
void busca(float atleta[][3], float *mais_baixo, float *mais_alto, float *mais_leve, float *mais_pesado)
{
    // Declaração de variáveis:
    float menor_altura = 1000, maior_altura = 0, maior_peso = 0, menor_peso = 1000;

    // Buscando as informações necessárias:
    for (int i = 0; i < 10; i++)
    {
        if (atleta[i][1] < menor_altura) // Condição para ser o mais baixo;
        {
            menor_altura = atleta[i][1];
            *mais_baixo = atleta[i][0];
        }
        if (atleta[i][1] > maior_altura) // Condição para ser o mais alto;
        {
            maior_altura = atleta[i][1];
            *mais_alto = atleta[i][0];
        }
        if (atleta[i][2] < menor_peso) // Condição para ser o mais leve;
        {
            menor_peso = atleta[i][2];
            *mais_leve = atleta[i][0];
        }
        if (atleta[i][2] > maior_peso) // Condição para ser o mais pesado.
        {
            maior_peso = atleta[i][2];
            *mais_pesado = atleta[i][0];
        }
    }
}

// Função para evitar a entrada de números de inscrição repetidos:
int repetido(float atleta[][3], int position)
{
    for (int i = position; i >= 0; i--)
    {
        if (atleta[i][0] == atleta[position][0] && i != position) // Verificar se o número de inscrição já foi introduzido anteriormente;
        {
            printf("ERRO!! Esse numero de inscricao ja foi cadastrado. Digite outro...\n\n"); // Solicitar um novo número.
            return (1);
        }
    }
    return (0);
}
