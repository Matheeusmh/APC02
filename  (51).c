/* 22. Construa um programa que calcule a quantidade de latas de tinta necessárias e o custo para
pintar tanques cilíndricos de combustível. Use ponteiros para envio dos dados a uma função
calcula(). Onde são fornecidos a altura e o raio desse cilindro.
– Sabendo que:
• a lata de tinta custa R$20,00
• cada lata contém 5 litros
• cada litro de tinta pinta 3 metros quadrados.
• Área do cilindro= 2 vezes a área da base + circunferência da base vezes a altura
• o raio e altura são dados de entrada */
#include <stdio.h>
#include <math.h>

// Declaração do protótipo de função:
void calcula(float *raio, float *altura, float *area, float *litros, float *custo);

// Declaração de uma constante:
const float pi = 3.14;

int main(void)
{
    // Declaração de variáveis:
    float altura, raio, area, litros, custo;

    // Solicitar e armazenar valores(raio e altura):
    printf("___CALCULAR GASTOS DE PINTURA___\n");
    printf("Digite o raio do cilindro (em m): ");
    scanf("%f", &raio); // Armazenar o valor do raio;
    printf("Digite a altura do cilindro (em m): ");
    scanf("%f", &altura); // Armazenar o valor da altura.

    calcula(&raio, &altura, &area, &litros, &custo); // Chamada da função calcula().

    // Imprimir os valores da área do cilíndro, a quantidade de latas usadas na pintura e custo de pintura:
    printf("\n\t__DADOS__\n Area do cilindro: %.2fm^2\n Quantidade de latas: %.0f\n Custo (em R$): R$%.2f\n", area, litros, custo);

    return (0);
}

// Função para calcular a área, a quantidade de latas e custos na pintura do cilíndro:
void calcula(float *raio, float *altura, float *area, float *litros, float *custo)
{
    *area = (2 * (pi * pow(*raio, 2))) + (2 * pi * (*raio) * (*altura)); // Cálculo da área;
    *litros = (int)((*area / 3) / 5) + 1;                                // Cálculo de latas gastas;
    *custo = *litros * 20;                                               // Cálculo do custo de pintura.
}
