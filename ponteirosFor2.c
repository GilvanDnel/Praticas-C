/*Use struct, ponteiros, laços for e variaveis

Desenvolva um programa utilizando laço de repetição para ler os
dados de 3 pessoas.

Os dados são Idade, Nome Completo e Altura, ao final exiba os dados
e endereço de memória de cada variável.


Armazene o endereço de memória de cada variável em novas
variáveis do tipo ponteiro, e ao final, exiba todos os dados de forma
organizada.
*/

#include <stdio.h>  // Inclui a biblioteca padrão para entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings

struct Pessoa
{
    int idade;     // Idade da pessoa
    char nome[50]; // Nome completo da pessoa
    float altura;  // Altura da pessoa
};

int main()
{
    // Declaração de variáveis para armazenar os dados das pessoas
    struct Pessoa pessoas[3];    // Vetor de estruturas para armazenar os dados de 3 pessoas
    struct Pessoa *pessoaPtr[3]; // Vetor de ponteiros para as estruturas Pessoa

    // Laço FOR para inserir os dados das pessoas
    for (int i = 0; i < 3; i++) // Lê-se " enquanto i for menor que 3, incremente i em 1"
    {
        printf("Informe os dados da pessoa %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &pessoas[i].idade); // Lê a idade da pessoa
        getchar();                      // Limpa o buffer do teclado
        printf("Nome Completo: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin); // Lê o nome completo da pessoa
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = 0;    //  strcspm Remove o newline no final da string
        printf("Altura: ");
        scanf("%f", &pessoas[i].altura); // Lê a altura da pessoa

        // Armazena o endereço de memória da estrutura Pessoa no vetor de ponteiros
        pessoaPtr[i] = &pessoas[i];
    }

    // Exibe os dados e endereços de memória de cada variável
    printf("\nDados das Pessoas:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nPessoa %d:\n", i + 1);
        printf("Idade: %d, Endereço: %p\n", pessoaPtr[i]->idade, (void *)&pessoaPtr[i]->idade);
        printf("Nome Completo: %s, Endereço: %p\n", pessoaPtr[i]->nome, (void *)&pessoaPtr[i]->nome);
        printf("Altura: %.2f, Endereço: %p\n", pessoaPtr[i]->altura, (void *)&pessoaPtr[i]->altura);
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}