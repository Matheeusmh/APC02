/* 35. Implemente um programa para gerenciamento de uma Locadora (utilizando funções e vetores). Deve-se
usar ponteiros para uso dos vetores (nos parâmetros, na manipulação). Funções a serem criadas: cadastro
de produtos, controle de estoque, venda, renda mensal. Verifique no início do programa: Quantos produtos
serão cadastrados. Os produtos podem ser referenciados pelo índice, mas deve ter cadastrado o código do
mesmo. Dados do produto: nome, quantidade, valor. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaração da estrutura definida como um tipo:
typedef struct
{
        char nome[50];
        int quantidade_inicial;
        int quantidade_vendida;
        double valor;
        int codigo;
} produtos;

// Declaração dos protótipos das funções:
void cadastro_de_produtos(int *op, produtos *produto, int *quantidade_produtos, int *cadastrados, int *quantidade_nao_cadastrada);
void controle_estoque(produtos *produto, int *cadastrados, int *op);
void venda(produtos *produto, int *cadastrados, int *op);
void renda_mensal(produtos *produto, int *cadastrados, int *op);

int main(void)
{
        // Declaração de variáveis:
        int op = 1, quantidade_produtos, quantidade_nao_cadastrada, cadastrados = 0;

        // Solicitar e armazenar o número de produtos que serão cadastrados:
        printf("\t___LOCACAO___\n");
        printf("Digite quantos produtos serao cadastrados: \n");
        scanf("%d", &quantidade_produtos);

        // Declaração de variáveis:
        produtos produto[quantidade_produtos];
        quantidade_nao_cadastrada = quantidade_produtos;

        // Condição para o programa não ser encerrado:
        if (op == 1)
        {
                do
                {
                        op = 0;

                        // Imprimir as opções do menu, solicitar e armazenar opção escolhida:
                        system("cls");
                        printf("\t___LOCACAO___\n\n\t  __MENU__\nDigite...\n");
                        printf(" (1)Para cadastrar os produtos.\n");
                        printf(" (2)Para ver o controle de estoque.\n");
                        printf(" (3)Adicionar uma nova venda.\n");
                        printf(" (4)Arrecadacao mensal.\n");
                        printf(" (0)Para sair.\n Op: ");
                        scanf("%d", &op);

                        // Possibilidades de opções:
                        switch (op)
                        {
                        case 0: // Encerrar o programa:
                                break;
                        case 1: // Acessar o cadastro de produtos:
                                cadastro_de_produtos(&op, produto, &quantidade_produtos, &cadastrados, &quantidade_nao_cadastrada);
                                break;
                        case 2: // Acessar o estoque de produtos:
                                controle_estoque(produto, &cadastrados, &op);
                                break;
                        case 3: // Cadastrar uma venda:
                                venda(produto, &cadastrados, &op);
                                break;
                        case 4: // Ver rendimento:
                                renda_mensal(produto, &cadastrados, &op);
                                break;
                        default: // Opção inválida:
                                printf("Opcao INVALIDA! Digite outra opcao...\n");
                                break;
                        }
                } while (op != 0); // Condição para o programa não ser encerrado.
        }

        return (0);
}
// Função para cadastrar produtos:
void cadastro_de_produtos(int *op, produtos *produto, int *quantidade_produtos, int *cadastrados, int *quantidade_nao_cadastrada)
{
        // Declaração de variáveis:
        int i;
        *op = 0;

        system("cls"); // Limpar a tela.

        printf("\t__CADASTRO DE PRODUTOS__\n");
        if (*cadastrados == *quantidade_produtos) // Situação em que todos os itens já forma cadastrados:
        {
                printf("\nO cadastro ja foi finalizado!");

                // Imprimir os produtos que já foram cadastrados:
                printf("Produto(s) cadastrado(s)");
                for (i = 0; i < *quantidade_produtos; i++)
                {
                        printf("%s", produto[i].nome); // Item cadastrado.
                        printf("\n");
                }
        }
        else if (*quantidade_nao_cadastrada != 0) // Situação em que parte dos itens foram cadastrados anteriormente:
        {
                if (*quantidade_nao_cadastrada == *quantidade_produtos) // Nenhum item foi cadastrado:
                {
                        for (i = 0; *cadastrados != quantidade_produtos; i++)
                        {
                                produto[i].codigo = i + 1;         // Armazenar o código do produto.
                                produto[i].quantidade_vendida = 0; // Atribuindo a quantidade vendida inicialmente.

                                printf("\nDigite o nome do produto n.0%d: ", produto[i].codigo); // Solicitar o nome do produto;
                                fflush(stdin);                                                   // Limpar buffer.
                                fgets(produto[i].nome, 50, stdin);                               // Armazenar o nome do produto;
                                produto[i].nome[strlen(produto[i].nome) - 1] = '\0';             // Limitando string.

                                printf("Digite a quantidade do produto n.%d (%s): ", produto[i].codigo, produto[i].nome); // Solicitar a quantidade inicial do produto;
                                scanf("%d", &produto[i].quantidade_inicial);                                              // Armazenar a quantidade do produto.

                                printf("Digite o valor do %s: R$", produto[i].nome); // Solicitar o valor do produto;
                                scanf("%lf", &produto[i].valor);                     // Armazenar o valor do produto.

                                printf("\n");

                                (*cadastrados)++;
                                (*quantidade_nao_cadastrada)--;

                                if (*quantidade_nao_cadastrada != 0) // Situação em que nem todos os itens foram cadastrados ainda:
                                {
                                        printf("Deseja cadastrar mais produtos?\n(1)Sim\t(0)Nao");
                                        scanf("%d", op);

                                        while (*op != 0 && *op != 1)
                                        {
                                                printf("Opcao invalida!! Digite novamente...\n");
                                                scanf("%d", op);
                                        }

                                        if (*op == 0) // Finalizar o cadastro de produtos:
                                        {
                                                break;
                                        }
                                }
                                else // Situação em que todos os produtos já foram cadastrados:
                                {
                                        printf("TODOS produtos foram cadastrados!\n\n");
                                        break;
                                }
                        }
                }
                else
                { // Somente uma parte dos produtos foram cadastrados antes do usuário voltar ao menu:
                        // Imprimir os produtos que já foram cadastrados:
                        printf("\n  %d produto(s) foram cadastrado(s)!", *cadastrados);
                        printf("\n Produtos:\n");
                        for (i = 0; i < *cadastrados; i++)
                        {
                                printf("  %s \n", produto[i].nome);
                        }

                        // Verificar a opção:
                        printf("Deseja cadastrar mais algum?\n(1)Sim\t(0)Nao");
                        scanf("%d", op); // Armazenar a opção.

                        if (*op == 1) // Situação em que o usúario deseja cadastrar mais produtos:
                        {
                                for (i = *cadastrados; *cadastrados != quantidade_produtos; i++)
                                {
                                        produto[i].codigo = i + 1;         // Armazenar o código do produto;
                                        produto[i].quantidade_vendida = 0; // Atribuir a quantidade vendida inicialmente.

                                        printf("\nDigite o nome do produto n.0%d: ", produto[i].codigo); // Solicitar o nome do produto;
                                        fflush(stdin);                                                   // Limpar buffer.
                                        fgets(produto[i].nome, 50, stdin);                               // Armazenar o nome do produto;
                                        produto[i].nome[strlen(produto[i].nome) - 1] = '\0';             // Limitar a string.

                                        printf("Digite a quantidade do produto n.%d (%s): ", produto[i].codigo, produto[i].nome); // Solicitar a quantidade inicial do produto;
                                        scanf("%d", &produto[i].quantidade_inicial);                                              // Armazenar a quantidade inicial do produto.

                                        printf("Digite o valor do %s: R$", produto[i].nome); // Solicitar o preço do produto;
                                        scanf("%lf", &produto[i].valor);                     // Armazenar o preço do produto.

                                        printf("\n");

                                        (*cadastrados)++;
                                        (*quantidade_nao_cadastrada)--;

                                        if (*quantidade_nao_cadastrada != 0)
                                        {
                                                printf("\nDeseja cadastrar mais produtos?\n(1)Sim\t(0)Nao");
                                                scanf("%d", op);
                                                while (*op != 0 && *op != 1)
                                                {
                                                        printf("Opcao invalida!! Digite novamente...\n");
                                                        scanf("%d", op);
                                                }

                                                if (*op == 0) // Finalizar o cadastro de produtos:
                                                {
                                                        break;
                                                }
                                        }
                                        else // Todos os produtos foram cadastrados:
                                        {
                                                printf("TODOS produtos foram cadastrados!\n\n");
                                                break;
                                        }
                                }
                        }
                }
        }

        // Verificar se o usuário deseja voltar ao menu principal ou finalizar o programa:
        printf("Deseja voltar ao menu?\n(1)Sim\t(0)Nao(finalizar programa)\n");
        while (*op != 1)
        {
                if (*op != 0 && *op != 1)
                {
                        printf("Opcao invalida!! Digite novamente...\n");
                }
                scanf("%d", op);
        }
}

// Função para controlar o estoque de produtos:
void controle_estoque(produtos *produto, int *cadastrados, int *op)
{
        // Declaração de variáveis:
        int i;
        *op = 0;

        system("cls"); // Limpar a tela.

        // Imprimir as informações dos produtos cadastrados:
        printf("\t__ESTOQUE__\n\n");
        if (*cadastrados != 0)
                for (i = 0; i < *cadastrados; i++)
                {
                        printf("\tProduto: %s\n", produto[i].nome);
                        printf("\tCodigo do produto: 00%d\n", produto[i].codigo);
                        printf("\tQuantidade em estoque: %d\n", produto[i].quantidade_inicial - produto[i].quantidade_vendida);
                        printf("\tValor unitario: R$%.2lf\n", produto[i].valor);
                        printf("\tValor total: R$%.2lf\n", (produto[i].valor * produto[i].quantidade_inicial));
                        printf("\tValor vendido: R$%.2lf\n\n", (produto[i].valor * produto[i].quantidade_vendida));
                }
        else // Imprimir caso nenhum produto tenha sido cadastrado:
        {
                printf("  NENHUM produto foi cadastrado!!\n\n");
        }

        // Verificar se o usuário deseja voltar ao menu principal ou finalizar o programa:
        printf("Deseja voltar ao menu inicial?\n(1)Sim\t(0)Nao(finalizar o programa)\n");
        scanf("%d", op);
        while (*op != 0 && *op != 1)
        {
                printf("Opcao INVALIDA!! Digite outra opcao...\n");
                scanf("%d", op);
        }
}

// Função para adicionar uma nova venda:
void venda(produtos *produto, int *cadastrados, int *op)
{
        // Declaração de variáveis:
        int i, codigo = 0, quantidade = 0, j;
        *op = 0;

        system("cls"); // Limpar a tela.

        // Imprimir os produtos cadastrados:
        printf("\t__VENDAS__\n\n");
        printf(" Produtos cadastrados: \n");
        if (*cadastrados == 0) // Situação em que nenhum produto foi cadastrado:  
        {
                printf("\nNENHUM produto foi cadastrado!!\n");
        }
        else
        {
                for (i = 0; i < *cadastrados; i++)
                {
                        printf("  %s\n  Cod.00%d\n", produto[i].nome, produto[i].codigo);
                }

                // Venda de produtos:
                for (i = 0; i < *cadastrados; i++)
                {
                        printf("\nDigite o codigo do produto: ");    // Solicitar o código do produto vendido;
                        scanf("%d", &codigo);                        // Armazenar o código do produto vendido.
                        while ((codigo < 0 || codigo > cadastrados)) // Executar enquanto o código do produto for inválido:
                        {
                                printf("Codigo INVALIDO!! Digite um novo codigo...\n");
                                scanf("%d", &codigo);
                        }

                        printf("Quantidade vendida: ");                                      // Solicitar a quantidade vendida do produto;
                        scanf("%d", &quantidade);                                            // Armazenar a quantidade vendida do produto.
                        while (quantidade > produto[i].quantidade_inicial || quantidade < 0) // Executar enquanto a quantidade vendida for inválida:
                        {
                                printf("Quantidade inexistente! Digite uma quantidade valida...\n");
                                scanf("%d", &quantidade);
                        }

                        for (j = 0; j < *cadastrados; j++)
                        {
                                if (produto[j].codigo == codigo)
                                {
                                        produto[j].quantidade_vendida += quantidade;
                                }
                        }

                        // Verificar se mais alguma venda será cadastrada:
                        printf("\nDeseja cadastrar mais alguma venda?\n(1)Sim\t(0)Nao");
                        scanf("%d", op);
                        while (*op != 0 && *op != 1)
                        {
                                printf("Opcao INVALIDA!! Digite outra opcao...\n");
                                scanf("%d", op);
                        }
                        if (*op == 0)
                        {
                                break;
                        }
                }
        }
        // Verificar se o usuário deseja voltar ao menu principal ou finalizar o programa:
        printf("Deseja voltar ao menu inicial?\n(1)Sim\t(0)Nao(finalizar o programa)");
        scanf("%d", op);
        while (*op != 0 && *op != 1)
        {
                printf("Opcao INVALIDA!! Digite outra opcao...\n");
                scanf("%d", op);
        }
}

// Função para verificar a venda total:
void renda_mensal(produtos *produto, int *cadastrados, int *op)
{
        // Declaração de variáveis:
        int i;
        double total = 0;
        *op = 0;

        system("cls"); // Limpar a tela.

        // Imprimir as arrecadações totais:
        printf("__ARRECADACOES MENSAIS__\n");
        if (*cadastrados == 0)
        {
                printf("NENHUM item foi cadastrado...\n");
        }
        else
        {
                printf("Vendas: \n");
                for (i = 0; i < *cadastrados; i++)
                {
                        printf(" Produto: %s\t\tQtd. vendida: %d\n", produto[i].nome, produto[i].quantidade_vendida);
                        total += (produto[i].quantidade_vendida * produto[i].valor);
                }
                printf("\nTOTAL: %.2lf\n", total);
        }

        // Verificar se o usuário deseja voltar ao menu principal ou finalizar o programa:
        printf("\nDeseja voltar ao menu inicial?\n(1)Sim\t(0)Nao(finalizar o programa)");
        scanf("%d", op);
        while (*op != 0 && *op != 1)
        {
                printf("Opcao INVALIDA!! Digite outra opcao...\n");
                scanf("%d", op);
        }
}
