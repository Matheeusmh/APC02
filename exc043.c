/* 43. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas do chamado
Triângulo de Pascal. */
#include <stdio.h>

// Declaração dos protótipos das funções:
void triangulo_pascal(int n);
int coeficiente_binomial(int n, int k);
int fatorial(int x);

int main(void)
{
        // Declaração de variáveis:
        int tamanho;

        // Solicitar e armazenar o valor natural:
        printf("\t___TRIANGULO DE PASCAL___\n");
        printf("Digite um natural: ");
        scanf("%d", &tamanho);
        printf("\n");

        triangulo_pascal(tamanho); // Chamada da função triangulo_pascal.

        return (0);
}

// Função para cálcular os elementos do Triângulo de Pascal:
void triangulo_pascal(int n)
{
        // Declaração de variáveis:
        int i, j, k = 0;

        // Imprimir cada elemento do triângulo:
        for (i = 0; i < n; i++)
        {
                for (j = 0; j <= i; j++)
                {
                        printf("%d ", coeficiente_binomial(i, j)); // Chamar e imprimir o elemento resultante do coeficiente_binomial().
                }
                printf("\n");
        }
}

// Função para cálcular a combinação, ou seja, o coeficiente binomial e retornar:
int coeficiente_binomial(int n, int k)
{
        return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

// Função para a realização do fatorial do valor passado:
int fatorial(int x)
{
        // Fatorial com recursão:
        if (x == 1 || x == 0)
        {
                return 1;
        }
        else
        {
                return x * fatorial(x - 1);
        }
}
