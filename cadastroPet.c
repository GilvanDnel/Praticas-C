/*Crie um programa com a declaração e inicialização das variáveis adequadas para representar
os dados de um cachorro que será cadastrado em um pet shop.
Informações a serem armazenadas:
Idade do cachorro: 4 anos
Inicial do nome do cachorro: 'B'
Nome do cachorro: "Bolt"
Peso do cachorro: 12.3 kg
Altura do cachorro: 0.45 metros*/

#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída

int main()
{
    // Declaração e inicialização das variáveis do cachorro
    int idade = 4; // Idade do cachorro
    char inicialNome = 'B'; // Inicial do nome do cachorro
    char nome[50] = "Bolt"; // Nome do cachorro
    float peso = 12.3; // Peso do cachorro em kg
    float alt = 0.45; // Altura do cachorro em metros

    // Mensagem de cadastro realizado
    printf("Cadastro de amigo de estimação realizado com sucesso!");
    // Impressão dos dados do cachorro (esta linha está incorreta, mas comentada conforme pedido)
    printf("Nome: ", nome, "Inicial: ", inicialNome, "Idade: ", idade, "Peso: ", peso, "Altura", alt);
}