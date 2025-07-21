/*Crie uma struct para classe FUNCIONÁRIO, em seguida declare 2 membros diferentes, cada
membro deverá ter matricula, nome, setor e situação.
Declare e inicialize cada membro com seus próprios dados.
Em seguida, exiba os dados dos dois membros.*/

#include <stdio.h>  // Inclui a biblioteca padrão para entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings

int main()
{
    // declaração da struct Pessoa
    struct Pessoa
    {
        char nome[50];     // Nome do funcionário
        char cpf[15];      // CPF do funcionário
        int idade;         // Idade do funcionário
        char cargo[20];    // Cargo do funcionário
        char setor[20];    // Setor onde o funcionário atua
        char situacao[20]; // Situação do funcionário (ativo, inativo, etc.)
    };

    // Declaração de um funcionario da struct Pessoa
    struct Pessoa funcionario1;

    // Inicializando valores fixos para funcionario1
    strcpy(funcionario1.nome, "Gilvan Daniel");
    strcpy(funcionario1.cpf, "123.456.789-00");
    funcionario1.idade = 30;
    strcpy(funcionario1.cargo, "Desenvolvedor");
    strcpy(funcionario1.setor, "P&D");
    strcpy(funcionario1.situacao, "Ativo");

    struct Pessoa funcionario2;
    // Inicializando valores fixos para funcionario2
    strcpy(funcionario2.nome, "Andrew Moura");
    strcpy(funcionario2.cpf, "987.654.321-00");
    funcionario2.idade = 28;
    strcpy(funcionario2.cargo, "Desenvolvedor");
    strcpy(funcionario2.setor, "TI");
    strcpy(funcionario2.situacao, "Ativo");

    // Exibição dos dados do Funcionario 1
    printf("::: Desenvolvedores :::\n");
    printf("Nome: %s\nCPF: %s\nIdade: %d\n", funcionario1.nome, funcionario1.cpf, funcionario1.idade);
    printf("Cargo: %s\nSetor: %s\nSituação: %s\n", funcionario1.cargo, funcionario1.setor, funcionario1.situacao);
    printf("\n");

    // Exibição dos dados do Funcionario 2
    printf("Nome: %s\nCPF: %s\nIdade: %d\n", funcionario2.nome, funcionario2.cpf, funcionario2.idade);
    printf("Cargo: %s\nSetor: %s\nSituação: %s\n", funcionario2.cargo, funcionario2.setor, funcionario2.situacao);
    printf("\n");
}