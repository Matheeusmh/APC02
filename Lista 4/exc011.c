/*-------------------------------------------------------------------------
Aluno: Matheus Henrique de Andrade Pires
Matrícula: 202301138
Turma:  IBT0007 - ALGORITMOS E PROGRAMAÇÃO DE COMPUTADORES 2 (2023 .2 - TA)
        IBT0209 - LABORATÓRIO DE PROGRAMAÇÃO 2 (2023 .2 - TA)
Curso: Ciência da Computação
UFCAT - Universidade Federal de Catalão
Data de criação: 10/11/2023
---------------------------------------------------------------------------
11) Critique a função abaixo. Ela promete encontrar o
valor de um elemento máximo de v[0..n-1].*/
int MaximoR1(int v[], int n)
{
    int x; // Declaração de variável temporária na função;

    if (n == 1) // Condição de parada;
        return v[0]; // Retorno do elemento de menor posição do vetor;

    if (n == 2) // Condição de parada;
    {
        if (v[0] < v[1]) // Condição para que haja o retorno do elemento de posição 1;
            return v[1];
        else
            return v[0]; // Condição para que haja o retorno do elemnto de posição zero;
    }

    x = MaximoR1(v, n - 1); // Chamada da função MaximoR1() até a condição de parada e armazenamento do retorno na variável x;

    if (x < v[n - 1]) // Condição para verificar qual é o elemento de maior valor na volta da chamada;
        return v[n - 1]; // Retorno do elemento com maior valor;
    else
        return x; // Retorno do elemento com maior valor.
}
// O código não é o mais eficiente mais realiza a função desejada.
