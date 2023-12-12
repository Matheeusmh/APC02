/* 54. Escreva uma função recursiva para calcular o
valor de uma base x elevada a um expoente y. */
#include <stdio.h>

// Declaração do protótipo da função:
int potencia(int x, int y);

int main(void)
{
    // Declaração de variáveis:
    int x, y;

    // Solicitar e armazenar a base/expoente:
    printf("\t___CALCULAR A POTENCIACAO___\n");
    printf("  Digite o valor da base(valor inteiro): ");
    scanf("%d", &x); // Armazenar a base...
    printf("  Digite o valor do expoente(valor inteiro): ");
    scanf("%d", &y); // Armazenar o expoente...

    printf("\n  %d elevado a %d eh: %d\n", x, y, potencia(x, y)); // Chamar a função potencia() e imprimir o retorno.

    return (0);
}

// Função recursiva para calcular a potência:
int potencia(int x, int y)
{
    if (y == 1) // Condição de parada.
    {
        return x; // Retorno da base.
    }
    else
    {
        return x * potencia(x, y - 1); // Recursão multiplicando...
    }
}
