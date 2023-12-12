/* 35. Leia dois vetores de inteiros x e y, cada um com 10 elementos (verifique e não permita que o usuário informe
elementos repetidos). Calcule e mostre os vetores resultantes em cada caso abaixo, utilize uma função menu()
para chamar cada função e manipule o vetor nas funções com o uso de ponteiros: Soma() -> soma de cada
elemento de x com o elemento da mesma posição em y. Produto() -> multiplicação de cada elemento de x
com o elemento da mesma posição em y. Diferença() -> todos os elementos de x que não existam em y.
Interseção() -> apenas os elementos que aparecem nos dois vetores. Uniao() -> todos os elementos de x, e
todos os elementos de y que não estão em x. */
#include <stdio.h>
#include <stdlib.h>

// Declaração dos protótipos de funções:
int repetido(int *vetor, int count);
void menu(int *x, int *y, int *resultado);
void soma(int *x, int *y, int *resultado);
void produto(int *x, int *y, int *resultado);
void diferenca(int *x, int *y, int *resultado);
void intersecao(int *x, int *y, int *resultado);
void uniao(int *x, int *y, int *resultado);

int main(void)
{
    // Declaração de variáveis:
    int x[10], y[10], i, resultado[20];

    // Solicitando e armazenando os valores do vetor X:
    printf("\t___ANALISANDO VETORES___\n");
    printf("Digite os elementos do vetor X: ");
    for (i = 0; i < 10; i++)
    {
        do
        {
            scanf("%d", &x[i]);   // Armazenando...
        } while (repetido(x, i)); // Função para não permitir os valores repetidos.
    }

    // Solicirando e armazenando os valores do vetor Y:
    printf("\nDigite os elementos do vetor Y: ");
    for (i = 0; i < 10; i++)
    {
        do
        {
            scanf("%d", &y[i]);   // Armazenando...
        } while (repetido(y, i)); // Função para não permitir os valores repetidos.
    }

    menu(x, y, resultado); // Chamada da função menu().

    return (0);
}

// Função para verificar se o valor digitado já está no vetor:
int repetido(int *vetor, int count)
{
    // Declaração de variáveis:
    int i;

    // Looping para percorrer o vetor:
    for (i = 0; i < count; i++)
    {
        if (*(vetor + count) == *(vetor + i)) // Condição para ser um valor repetido:
        {
            printf("\nValor repetido!\nDigite um novo valor! Faltam %d elementos...\n", 10 - count);
            return 1;
        }
    }
    return 0;
}

// Função menu() para chamar as outras funções:
void menu(int *x, int *y, int *resultado)
{
    system("cls"); // Limpa a tela.
    // Declaração de variáveis:
    int i = 0;

    // Imprimir dados:
    printf("\t___DADOS___\n");
    printf("\n\t__VETOR X__\n");
    for (; i < 10; i++) // Looping para imprimir os valores armazenados no vetor X:
    {
        printf("%d  ", *(x + i));
    }
    printf("\n");

    printf("\n\t__VETOR Y__\n"); // Looping para imprimir os valores armazenados no vetor Y:
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", *(y + i));
    }
    printf("\n");

    soma(x, y, resultado);       // Chamada da função soma();
    produto(x, y, resultado);    // Chamada da função produto();
    diferenca(x, y, resultado);  // Chamada da função diferenca();
    intersecao(x, y, resultado); // Chamada da função intersecao();
    uniao(x, y, resultado);      // Chamada da função uniao().
}

// Função para somar elementos de mesma posição nos diferentes vetores:
void soma(int *x, int *y, int *resultado)
{
    // Declaração da variável:
    int i;

    // Somando os valores dos vetores x e y de mesma posição:
    for (i = 0; i < 10; i++)
    {
        *(resultado + i) = *(x + i) + *(y + i);
    }

    // Imprimindo a soma dos elementos somados:
    printf("\n]t__SOMA__\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", *(resultado + i));
    }
    printf("\n");
}
// Função para multiplicar elementos de mesma posição nos diferentes vetores:
void produto(int *x, int *y, int *resultado)
{
    // Declaração da variável:
    int i;

    // Multiplicando os valores dos vetores x e y de mesma posição:
    for (i = 0; i < 10; i++)
    {
        *(resultado + i) = *(x + i) * *(y + i);
    }

    // Imprimindo o produto dos elementos multiplicados:
    printf("\n\t__PRODUTO__\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", *(resultado + i));
    }
    printf("\n");
}
// Função para subtrair elementos de mesma posição nos diferentes vetores:
void diferenca(int *x, int *y, int *resultado)
{
    // Declaração da variável:
    int i;

    // Subtraindo os valores dos vetores x e y de mesma posição:
    for (i = 0; i < 10; i++)
    {
        *(resultado + i) = *(x + i) - *(y + i);
    }

    // Imprimindo a subtração dos elementos de mesma posição:
    printf("\n\t__DIFERENCA__\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", *(resultado + i));
    }
    printf("\n");
}

// Função para verificar e imprimir os elementos existentes nos dois vetores:
void intersecao(int *x, int *y, int *resultado)
{
    // Declaração de variáveis:
    int i, j, count = 0, z = 0;

    // Verificando se há algum elemento em comum entre os dois vetores:
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (*(x + i) == *(y + j))
            {
                *(resultado + z++) = *(x + i);
                count++;
            }
        }
    }

    // Imprime os elementos em comum, se houver:
    printf("\n\t__INTERSECAO__\n");
    for (i = 0; i < count; i++)
    {
        printf("%d  ", *(resultado + i));
    }
    printf("\n");
}

// Verifica e imprime os elementos diferentes das funções:
void uniao(int *x, int *y, int *resultado)
{
    // Declaração de variáveis:
    int i, j = 0, z = 10, count = 0;

    // Adicionar elementos do vetor X:
    for (i = 0; i < 10; i++)
    {
        *(resultado + i) = *(x + i);
    }

    // Verificar e armazenar elementos de Y que são diferentes de X:
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (*(resultado + j) == *(y + i))
            {
                count++;
                break;
            }
            else if (*(resultado + j) != *(y + i) && j == 9)
            {
                *(resultado + z++) = *(y + i);
                break;
            }
        }
    }

    // Imprime os valores pertencentes a união dos dois vetores:
    printf("\n\t__UNIAO DOS DOIS VETORES__\n");
    for (i = 0; i < (20 - count); i++)
    {
        printf("%d  ", *(resultado + i));
    }
    printf("\n");
}
