/*Desenvolva um programa que solicite ao usuário dois números
inteiros.

Crie uma função chamada soma que receba dois inteiros como
parâmetros e retorne a soma deles.

Na main(), chame a função soma e exiba o resultado na tela.*/



#include <stdio.h> // Inclui a biblioteca padrão para entrada e saída

// Declaração da função soma que recebe dois inteiros e retorna a soma essa função é definida antes da função main para que possa ser chamada dentro dela;
int soma(int a, int b) {
    return a + b; // Retorna a soma dos dois números
}


int main() {
    int num1, num2; // Declaração de variáveis para armazenar os números que serão inseridos pelo usuário e no processamento da função soma ocuparão espaço de a e b;

    // Solicita ao usuário que insira dois números inteiros
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1); // Lê o primeiro número inteiro e com & comercial armazena em num1
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2); // Lê o segundo número inteiro e com & comercial armazena em num2

    // Chama a função soma e exibe o resultado
    int resultado = soma(num1, num2);
    printf("A soma de %d e %d é: %d\n", num1, num2, resultado);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}