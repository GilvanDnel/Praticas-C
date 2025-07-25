/*Você foi contratado por um petshop para desenvolver um sistema simples de cadastro de animais. Sua tarefa é criar um programa em linguagem C que:
Crie uma com os seguintes campos:
nome (até 50 caracteres)
especie (até 30 caracteres – ex: cachorro, gato, coelho, etc.)
raca (até 30 caracteres)
idade (inteiro)
peso (float)
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada/saída
#include <string.h> // Inclui a biblioteca para manipulação de strings
#include <stdlib.h> // Inclui a biblioteca para alocação de memória dinâmica

#define MAX_ANIMAIS 100 // Define o número máximo de animais que podem ser cadastrados
struct Animal
{
    char nome[50];    // Nome do animal
    char especie[30]; // Espécie do animal
    char raca[30];    // Raça do animal
    int idade;        // Idade do animal
    float peso;       // Peso do animal
};

int main() // Função principal do programa

// Declaração de variáveis

{

    printf("##############################################################\n");
    printf("## Bem vindo ao sistema de Cadastro de Animais para Petshop ##\n");
    printf("##          Desenvolvido por Gilvan Daniel da Silva         ##\n");
    printf("##############################################################\n");

    struct Animal *animais; // Ponteiro para armazenar os animais
    int numAnimais = 0;     // Contador de animais cadastrados
    char continuar;         // Variável para controlar o loop de cadastro

    // Aloca memória para o vetor de animais
    animais = (struct Animal *)malloc(MAX_ANIMAIS * sizeof(struct Animal));
    if (animais == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1; // Retorna 1 em caso de erro na alocação
    }

    do
    {
        // Solicita os dados do animal
        printf("Cadastro de Animal %d:\n", numAnimais + 1);                       // Exibe o número do animal a ser cadastrado
        printf("Nome: ");                                                         // Solicita o nome do animal
        fgets(animais[numAnimais].nome, sizeof(animais[numAnimais].nome), stdin); // Lê o nome do animal
        animais[numAnimais].nome[strcspn(animais[numAnimais].nome, "\n")] = 0;    // Remove o newline com strcspn

        printf("Espécie: ");                                                            // Solicita a espécie do animal
        fgets(animais[numAnimais].especie, sizeof(animais[numAnimais].especie), stdin); // Lê a espécie do animal
        animais[numAnimais].especie[strcspn(animais[numAnimais].especie, "\n")] = 0;    // Remove o newline com strcspn

        printf("Raça: ");                                                         // Solicita a raça do animal
        fgets(animais[numAnimais].raca, sizeof(animais[numAnimais].raca), stdin); // Lê a raça do animal
        animais[numAnimais].raca[strcspn(animais[numAnimais].raca, "\n")] = 0;    // Remove o newline com strcspn

        printf("Idade: ");                       // Solicita a idade do animal
        scanf("%d", &animais[numAnimais].idade); // Lê a idade do animal

        printf("Peso: ");                       // Solicita o peso do animal
        scanf("%f", &animais[numAnimais].peso); // Lê o peso do animal

        getchar(); // Limpa o buffer do teclado

        numAnimais++; // Incrementa o contador de animais

        // Pergunta se deseja cadastrar outro animal
        printf("Deseja cadastrar outro animal? (s/n): ");
        scanf("%c", &continuar); // Lê a resposta do usuário
        getchar();               // Limpa o buffer do teclado

    } while (continuar == 's' && numAnimais < MAX_ANIMAIS); // Continua o loop enquanto o usuário quiser cadastrar mais animais e não ultrapassar o limite

    // Exibe os dados dos animais cadastrados
    printf("\nAnimais Cadastrados:\n");
    for (int i = 0; i < numAnimais; i++)
    {
        printf("Animal %d:\n", i + 1);                // Exibe o número do animal
        printf("Nome: %s\n", animais[i].nome);        // Exibe o nome do animal
        printf("Espécie: %s\n", animais[i].especie);  // Exibe a espécie do animal
        printf("Raça: %s\n", animais[i].raca);        // Exibe a raça do animal
        printf("Idade: %d anos\n", animais[i].idade); // Exibe a idade do animal
        printf("Peso: %.2f kg\n", animais[i].peso);   // Exibe o peso do animal
        printf("-------------------------\n");        // Linha de separação entre os animais
    }
    // Libera a memória alocada
    free(animais);
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

/*
README
# Metodo de identação : "CTROL + , ", Selecionar opção format on save, assim o código será formatado automaticamente ao salvar.


# AV4.C - Sistema de Cadastro de Animais para Petshop

# Sistema de Cadastro de Animais para Petshop

Este programa em C permite o cadastro de animais em um petshop, armazenando informações como nome, espécie, raça, idade e peso.

## Funcionalidades

- Cadastro de múltiplos animais (até 100).
- Armazenamento dos dados em memória dinâmica.
- Exibição dos animais cadastrados ao final.

## Como usar

1. Compile o código com um compilador C (ex: gcc AV4.C -o cadastro_animais).
2. Execute o programa.
3. Insira os dados solicitados para cada animal.
4. Escolha se deseja cadastrar outro animal.
5. Ao finalizar, o programa exibirá todos os animais cadastrados.

## Estrutura dos Dados

Cada animal possui:
- Nome (até 50 caracteres)
- Espécie (até 30 caracteres)
- Raça (até 30 caracteres)
- Idade (inteiro)
- Peso (float)

## Observações

- O programa utiliza `fgets` para entrada de strings e `scanf` para números.
- A memória alocada é liberada ao final da execução.
- O limite de cadastro é de 100 animais.
- O programa garante que o usuário não ultrapasse esse limite.
- As strings são tratadas para remover o caractere de nova linha no final com uso de `strcspn`.
- O programa utiliza `malloc` para alocação dinâmica de memória e `free` para liberar essa memória ao final.
# AV4.C
Este é um exemplo de um programa simples em C que demonstra o uso de estruturas, alocação dinâmica de memória,
e manipulação de strings para o cadastro de animais em um petshop. O programa permite que o usuário cadastre até 100 animais,
solicitando informações como nome, espécie, raça, idade e peso. Após o cadastro, os dados dos animais são exibidos de forma organizada.

*/