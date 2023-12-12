/* 21. Faça um programa que tendo como entrada dois pontos quaisquer do plano
P(x1,y1) e Q(x2,y2), utilizando ponteiros para passagem dos valores, imprima a
distância entre eles. Fórmula da distância:*/
#include <stdio.h>

// Declaração do protótipo de função:
void calcular_distancia(float *p, float *q, float *distancia);

int main(void)
{
    // Declaração de variáveis:
    float p[2], q[2], distancia;

    // Solicitar e armazenar as coordenadas do ponto "p"/"q":
    printf("___CALCULAR A DISTANCIA ENTRE DOIS PONTOS___\n");
    printf("Digite as coordenadas x e y, respectivamente, do primeiro ponto: ");
    scanf("%f %f", &p[0], &p[1]); // Armazenar as coordenadas x e y do ponto "q";
    printf("\nDigite as coordenadas x e y, respectivamente do segundo ponto: ");
    scanf("%f %f", &q[0], &q[1]); // Armazenar as coordenadas x e y do ponto "q".

    calcular_distancia(p, q, &distancia); // Chamada da função calcular_distancia().

    // Imprimir a distancia entre os pontos "p" e "q":
    printf("\n _A distancia entre os dois pontos eh: %f\n", distancia);

    return (0);
}

// Função para calcular a distância entre dois pontos:
void calcular_distancia(float *p, float *q, float *distancia)
{
    *distancia = sqrt(pow((*q++ - *p++), 2) + pow((*q - *p), 2)); // Cálculo da distância entre dois pontos.
}
