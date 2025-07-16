#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main()
{

    int a, b, soma, subtracao, multiplicacao; // Declara variáveis inteiras
    double divisao; // Declara variável de ponto flutuante para divisão
    printf("Valor do primeiro numero: "); // Solicita o primeiro número ao usuário
    scanf("%d", &a); // Lê o valor do primeiro número
    printf("Valor do segundo numero: "); // Solicita o segundo número ao usuário
    scanf("%d", &b); // Lê o valor do segundo número

    soma = a + b; // Calcula a soma dos dois números
    subtracao = a - b; // Calcula a subtração dos dois números
    multiplicacao = a * b; // Calcula a multiplicação dos dois números
    divisao = (double)a / (double)b; // Calcula a divisão dos dois números, convertendo para double

    printf("a+b: %.0d\n", soma); // Exibe o resultado da soma
    printf("a-b: %.0d\n", subtracao); // Exibe o resultado da subtração
    printf("a*b: %.0d\n", multiplicacao); // Exibe o resultado da multiplicação
    printf("a/b: %.2f\n", divisao); // Exibe o resultado da divisão com duas casas decimais

    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
