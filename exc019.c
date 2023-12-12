/* 19. Fazer uma função que recebe 3 parâmetros: um vetor de inteiros, um número inteiro n
enviado com passagem por valor e outro número x enviado como passagem por
referência. Em uma função verifica(), envie todos os elementos utilizando ponteiros para
suas manipulações e veja se os números n e x estão no vetor e imprima se estiver.*/
#include <stdio.h>

// Declaração dos protótipos de funções:
int recebe(int *vet, int n, int *x);
void verifica(int *vet, int *n, int *x);

int main(void)
{
    // Declaração de variáveis:
    int vet[10], n, x, i;

    // Chamada da função recebe() e retorno de "n" (passado por valor):
    n = recebe(vet, n, &x);

    verifica(vet, &n, &x); // Chamada da função verifica().

    return (0);
}

// Função para receber e armazenar os valores (vet, n e x):
int recebe(int *vet, int n, int *x)
{
    // Declaração de variável:
    int i;

    // Solicitar e armazenar os valores do vetor:
    printf("__LOCALIZAR NO VETOR__\n");
    printf("Digite 10 valores inteiros: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", vet++);
    }

    // Solicitar e armazenar o valor de "n":
    printf("\nDigite um valor n para ser procurado: ");
    scanf("%d", &n);

    // Solicitar e armazenar o valor de "x":
    printf("Digite um valor x para ser procurado: ");
    scanf("%d", x);
    printf("\n");

    return n; // Retorna o valor de "n" e armazena na variável "n".
}

// Função para verificar se os elementos "n" e "x" estão contidos no vetor:
void verifica(int *vet, int *n, int *x)
{
    // Declaração de variáveis:
    int i, countx = 0, countn = 0;

    printf("\n\t__DADOS__");
    for (i = 0; i < 10; i++)
    { // Verificando se o valor de "n" está no vetor e imprime se estiver:
        if (*(vet + i) == *n)
        {
            printf("\n Valor encontrado (n): %d\n Posicao no vetor: %d\n", *(vet + i), i);
            countn++;
        } // Verificando se o valor de "x" está no vetor e imprime se estiver:
        else if (*(vet + i) == *x)
        {
            printf("\n Valor encontrado (x): %d\n Posicao no vetor: %d\n", *(vet + i), i);
            countx++;
        }
    }
    if (countx == 0) // Condição para "x" não estar no vetor:
    {
        printf("\n _Nao foi possivel localizar o valor de x (%d) no vetor!!\n", *x);
    }
    else if (countn == 0) // Condição para "y" não estar no vetor:
    {
        printf("\n _Nao foi possivel localizar o valor de n (%d) no vetor!!\n", *n);
    }
    printf("\n");
}
 