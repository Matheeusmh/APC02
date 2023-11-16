/* Faça um programa que dado 2 variáveis inteiras a=2 e b=3, use a função void troca(int
*a1, int *b1), que deve fazer a inversão dos valores de a e b. Após a chamada da função,
imprimir os valores de a e b. A função troca também deve ser implementada e deve ter
tipo de retorno void. Todas as manipulações deve se dar usando ponteiros.
*/
#include <stdio.h>

// Declaração do protótipo de função: 
void troca(int *a1, int *b1);

int main(void)
{
    // Declaração de variáveis:
    int a = 2, b = 3;

    troca(&a, &b); // Chamar a função troca().

    printf("__TROCA DE VALORES__\n");
    printf("O valor de A eh: %d\nO valor de B eh: %d\n", a, b); // Imprimir os valores de "a" e "b" após a troca.

    return (0);
}

// Função para realizar a troca de valores entre "a" e "b":
void troca(int *a1, int *b1)
{
    int aux = *a1; // "aux" recebendo o conteúdo de "a".
    *a1 = *b1;     // O conteúdo de "a" recebendo o conteúdo de "b"
    *b1 = aux;     // O conteúdo de "b" recebendo o conteúdo de "aux"
}
