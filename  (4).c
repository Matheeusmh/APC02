/* 47. Construa um programa que receba da linha de comando, com a qual o programa é executado, três
valores em ponto flutuante, verifique por meio de uma função chamada triangulo() qual seu tipo, e informe
na saída padrão se estes podem ou não formar os lados de um triângulo e qual tipo seria: Equilátero,
Isósceles ou Escaleno. Os valores devem ser passados para a função triangulo() por meio de ponteiros. */
#include <stdio.h>
#include <stdlib.h>

// Declaração do protótipo da função:
void triangulo(float *lado_a, float *lado_b, float *lado_c);

int main(int argc, char *argv[])
{
    // Declaração de variável:
    int i;

    // Conversão de caracter para float:
    float lado_a = atof(argv[1]);
    float lado_b = atof(argv[2]);
    float lado_c = atof(argv[3]);

    triangulo(&lado_a, &lado_b, &lado_c); // Chamada da função triangulo().

    return 0;
}

// Função para verificar se os segmentos formam um triângulo e qual o seu tipo:
void triangulo(float *lado_a, float *lado_b, float *lado_c)
{
    // Condições para os segmentos formarem um triângulo:
    if (*lado_a > *lado_b - *lado_c && *lado_a < *lado_b + *lado_c)
    {
        if (*lado_b > *lado_a - *lado_c && *lado_b < *lado_a + *lado_c)
        {
            if (*lado_c > *lado_a - *lado_b && *lado_c < *lado_a + *lado_b)
            {
                // Condição para ser um triângulo equilatero:
                if (*lado_a == *lado_b && *lado_a == *lado_b && *lado_b == *lado_c)
                {
                    printf("Esse eh um triangulo EQUILATERO!\n");
                }
                // Condição para ser um triângulo escaleno:
                else if (*lado_a != *lado_b && *lado_c != *lado_a && *lado_b != *lado_c)
                {
                    printf("Esse eh um triangulo ESCALENO!\n");
                }
                // Condição para ser um triângulo isosceles:
                else
                {
                    printf("Esse eh um triangulo ISOSCELES!\n");
                }
            }
            else
            {
                printf("Triangulo INVALIDO!! Nao eh possivel formar um triangulo com esses lados!");
            }
        }
        else
        {
            printf("Triangulo INVALIDO!! Nao eh possivel formar um triangulo com esses lados!");
        }
    }
    else
    {
        printf("Triangulo INVALIDO!! Nao eh possivel formar um triangulo com esses lados!");
    }
}
