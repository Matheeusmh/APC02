/* Crie e teste a função void InverteS(char *s) que retorna uma string invertida, utilizando
ponteiros.
– Por exemplo, se s = “Palindromo”,
– Após a chamada a função InverteS(), s = “omordnilaP”.*/
#include <stdio.h>
#include <string.h>

// Declaração do protótipo de função: 
void inverterS(char *palavra, int *tamanho);

int main(void)
{
    // Declaração de variável:
    char palavra[100];

    // Solicitar e armazenar uma string:
    printf("\t___INVERTER___\n");
    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin); // Armazena a string.

    palavra[strlen(palavra) - 1] = '\0'; // Remove o '\n'do final da string;
    int tamanho = strlen(palavra) - 1;   // Uma variável com o tamanho da string.

    printf("\n\t__STRING NORMAL__\n%s\n", palavra); // Imprimir string antes da função ser chamada.

    inverterS(palavra, &tamanho); // Chamada da função inverterS().

    printf("\n\t__STRING INVERTIDA__\n%s\n", palavra); // Imprimir a string invertida.

    return (0);
}

// Fução para inverter a string:
void inverterS(char *palavra, int *tamanho)
{
    char *i = palavra + *tamanho, aux = 0;

    for (; *palavra; palavra++) // Loop que acaba no '\0':
    {                           // Condição para inverter o conteúdo dos elementos:
        if (palavra < i)
        {
            aux = *i;       // "aux" recebe o conteúdo do elemento "i";
            *i = *palavra;  // O conteúdo de "i" passa a ser o conteúdo de "palavra";
            *palavra = aux; // O conteúdo de "palavra" passa a ser o conteúdo de "i".
            i--;
        }
        else
            break;
    }
}
