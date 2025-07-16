#include <string.h>
#include <stdio.h>

int main()
{
    // Declaração das variáveis para armazenar os dados do usuário
    char nome[100], email[50], tel[12], genero[2], cpf[20];
    float peso, altura;
    int idade;

    // Solicita e lê o nome completo do usuário
    printf("Nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    // Solicita e lê o email do usuário
    printf("Email: ");
    fgets(email, sizeof(email), stdin);

    // Solicita e lê o gênero do usuário
    printf("Genero: ");
    fgets(genero, sizeof(genero), stdin);

    // Solicita e lê o CPF do usuário
    printf("Seu CPF: ");
    fgets(cpf, sizeof(cpf), stdin);

    // Solicita e lê o telefone do usuário
    printf("Seu Telefone: ");
    fgets(tel, sizeof(tel), stdin);

    // Solicita e lê o peso do usuário
    printf("Seu peso: ");
    scanf("%f", &peso);

    // Solicita e lê a altura do usuário
    printf("Sua altura: ");
    scanf("%f", &altura);

    // Solicita e lê a idade do usuário
    printf("Sua idade: ");
    scanf("%d", &idade);

    // Exibe todos os dados coletados do usuário
    printf("Olá %s, seu email é %s, seu telefone é %s, seu genero é %s, seu peso é %.2f, sua altura é %.2f, sua idade é %d, e seu cpf é %s", nome, email, tel, genero, peso, altura, idade, cpf);

    return 0;
}
