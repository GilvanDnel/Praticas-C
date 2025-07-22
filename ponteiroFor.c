/*Desenvolva um programa utilizando laço de repetição para ler os
dados de 3 pessoas.

Os dados são Idade, Nome Completo e Altura, ao final exiba os dados
e endereço de memória de cada variável.

Não precosa de struct, apenas variáveis simples e laços de repetição e ponteiros.
*/

#include <stdio.h>  // Inclui a biblioteca padrão para entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings

int main()
{
    // Declaração de variáveis para armazenar os dados das pessoas
    int idade[3];     // Vetor para armazenar a idade de 3 pessoas
    char nome[3][50]; // Matriz para armazenar o nome completo de 3 pessoas
    float altura[3];  // Vetor para armazenar a altura de 3 pessoas

    // Laço FOR para inserir os dados das pessoas
    for (int i = 0; i < 3; i++) // Lê-se " enquanto ir for igual a 0, enquanto i for menor que 3, incremente i em 1"
    {

        /*Aqui i vale zero, então o primeiro laço será "Informe os dados da pessoa 1" e depois i vai receber 1,
        e o laço vai repetir enquanto i for menor que 3, ou seja, enquanto i for igual a 0, 1 ou 2.*/
        printf("Informe os dados da pessoa %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &idade[i]); // Lê a idade da pessoa
        getchar();              // Limpa o buffer do teclado
        printf("Nome Completo: ");
        fgets(nome[i], sizeof(nome[i]), stdin); // Lê o nome completo da pessoa
        nome[i][strcspn(nome[i], "\n")] = 0;    // Remove o newline no final da string
        printf("Altura: ");
        scanf("%f", &altura[i]); // Lê a altura da pessoa
    }

    // Exibe os dados e endereços de memória de cada variável
    printf("\nDados das Pessoas:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nPessoa %d:\n", i + 1);
        printf("Idade: %d, Endereço: %p\n", idade[i], (void *)&idade[i]);
        // Aqui usamos %p para imprimir o endereço de memória da variável idade
        //  O (void*) é usado para garantir que o endereço seja impresso corretamente como ponteiro
        //  O & obtém o endereço de memória da variável idade, nome e altura

        printf("Nome Completo: %s, Endereço: %p\n", nome[i], (void *)&nome[i]);
        // Aqui usamos %s para imprimir a string nome[i] e %p para imprimir o endereço de memória da variável nome[i];
        // o * no void significa que estamos tratando o endereço como um ponteiro genérico no void o void* é um tipo de ponteiro que pode apontar para qualquer tipo de dado.
        printf("Altura: %.2f, Endereço: %p\n", altura[i], (void *)&altura[i]);
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

// Repare que usamos o %p para imprimir o endereço de memória das variáveis idade, nome e altura.
// O %p é usado para formatar o endereço como ponteiro, e o (void *) é usado para garantir que o endereço seja impresso corretamente como ponteiro.
// O & obtém o endereço de memória da variável idade, nome e altura, e o void* é usado para garantir que o endereço seja impresso corretamente como ponteiro.
// O void* é um tipo de ponteiro que pode apontar para qualquer tipo de dado
// e é usado para garantir que o endereço seja impresso corretamente como ponteiro.
// Repare que usamos o %s para imprimir a string nome[i] e %p para imprimir o endereço de memória da variável nome[i];