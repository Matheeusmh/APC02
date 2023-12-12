/* 10. Faça um programa que leia um vetor de 10 posições para números reais e um
código inteiro que escolhe uma opção na função menu(). Na função menu(), se o
código for 0 finalize o programa; se for 1 chame a função imprime() e imprima o
vetor na ordem direta; se for 2, chama a mesma função imprime() e mostre o vetor
na ordem inversa. Caso, o código seja diferente escreva uma mensagem informando
código inválido. Todas as funções devem manipulador os vetores com o uso de
ponteiros. */
#include <stdio.h>

void menu(int *op, float *vet);
void imprime(int *op, float *vet);

int main(void)
{
    // Declaração de variáveis:
    float vet[10];
    int op = 0;

    // Solicitar e armazenar os 10 valores digitados:
    printf("Digite 10 valores reais: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vet[i]); // Armazenar o valor.
    }

    menu(&op, vet); // Chamando a função menu().

    return (0);
}
// Função para imprimir o menu e armazenar a opção digitada:
void menu(int *op, float *vet)
{
    do
    {
        printf("\n  __MENU__ \n  Escolha...\n  (0)Para finalizar o programa.\n  (1)Para imprimir o vetor na ordem DIRETA. \n  (2)Para imprimir o vetor na oredem INVERSA.\n  OP: ");
        scanf("%d", op); // Armazenando opção.
        switch (*op)     // Verificando qual foi a opção de entrada;
        {
        case 0: // Fechar o programa;
            break;
        case 1:               // Escrever na ordem direta;
            imprime(op, vet); // Chamada da função imprime();
            break;
        case 2:               // Escrever na ordem inversa;
            imprime(op, vet); // Chamada da função imprime():
            break;
        default: // Nenhuma das opções.
            printf("\n Codigo INVALIDO!!!\n");
            break;
        }
    } while (*op != 0); // Condição para o programa não ser fechado.
}

// Função para imprimir o vetor:
void imprime(int *op, float *vet)
{
    if (*op == 1) // Imprime na ordem direta.
    {
        printf("\n\t__ORDEM DIRETA__\n ");
        for (int i = 0; i < 10; i++)
        {
            printf("%.1f ", vet[i]);
        }
        printf("\n");
    }
    else // Imprime na ordem inversa.
    {
        printf("\n\t__ORDEM INVERSA__\n ");
        for (int i = 9; i >= 0; i--)
        {
            printf("%.1f ", vet[i]);
        }
        printf("\n");
    }
}
