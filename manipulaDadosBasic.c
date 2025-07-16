#include <string.h> //inclui biblioteca fgets
#include <stdio.h>  //inclui biblioteca scanf

int main()
{
    char nome[50], apelido[50]; // cria as variaveis do tipo string
    int idade;                  // cria variavel do tipo inteiro
    float altura;               // cria a variaveis do tipo flutuante

    printf("Digite seu nome completo: ");   // solicita dados de entrada para variavel nome
    fgets(nome, sizeof(nome), stdin);       // faz a leitura daquilo que o usuario digitou
    printf("Digite seu apelido: ");         // solicita dados de entrada para variavel apelido
    fgets(apelido, sizeof(apelido), stdin); // faz a leitura dos valores digitados
    printf("Digite sua idade: ");           // solicita dados de entrada para variavel idade;
    scanf("%d", &idade);                    // faz a leitura dos dados de entrada
    printf("Digite sua altura: ");          // solicita dados de entrada para variavel altura;
    scanf("%f", &altura);                   // faz a leitura dos dados de entrada

    printf("Olá %s, vi que seu apelido é %s, sua idade é %d e sua altura é %.2f.", nome, apelido, idade, altura);
    // envia uma mensagem ao usuario com todos os dados digitados.

    return 0;
}
