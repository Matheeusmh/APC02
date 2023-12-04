#include <stdio.h>

// Declaração dos protótipos das funções:
void menu(int *op);
int calcular_fatorial(int num, int *fatorial);

int main(void)
{
    // Declaração de variável:
    int op = 0;

    // Chamada da função menu() até o usúario encerrar o programa:
    do
    {
        menu(&op);
    } while (op != 0);

    return (0);
}

// Função para solicitar e executar a opção do usúario:
void menu(int *op)
{
    // Declaração de variáveis:
    int num = 0, fatorial = 1;

    // Imprimir o menu, solicitar uma opção e armazenar a opção:
    printf("\t___MENU___\n");
    printf("Digite...\n (1)Para calculcar o fatorial.\n (0)Para sair.\nOp: ");
    scanf("%d", op); // Armazenando a opção...
    switch (*op)
    {       // Possíveis opções:
    case 1: // Caso a opção 1 seja digitada:
        printf("\nDigite um valor para calcular o fatorial: ");
        scanf("%d", &num);                                    // Armazenar o número que o usuário deseja calcular o fatorial.
        calcular_fatorial(num, &fatorial);                    // Chamada da função calcular_fatorial().
        printf("O fatorial de %d eh: %d\n\n", num, fatorial); // Imprimir o resultado do fatorial do valor digitado.
        break;
    case 0: // Caso a opção 0 seja digitada:
        break;
    default: // Caso a opção digitada seja inválida:
        printf("Opcao INVALIDA!!\n\n");
    }
}

// Função para calcular o fatorial:
int calcular_fatorial(int num, int *fatorial)
{
    // Condição para parar de chamar a função:
    if (num == 0 || num == 1)
    {
        return 1;
    }
    // Continuar a chamada e voltar calculando o fatorial:
    else
    {
        calcular_fatorial(num - 1, fatorial);
        *fatorial *= num;
    }
}
