/*Desenvolva um programa que implemente uma struct veículo para armazenar
os dados de 1 carro, sendo necessário armazenar Marca, Modelo, Ano e Valor.
Os dados deverão ser inseridos pelo usuário e exibidos ao final. */

#include <stdio.h>  // Inclui a biblioteca padrão para entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings

int main()
{
    // Declaração da struct Veiculo
    struct Veiculo
    {
        char marca[20];  // Marca do veículo
        char modelo[20]; // Modelo do veículo
        int ano;         // Ano de fabricação do veículo
        float valor;     // Valor do veículo
    };

    struct Veiculo carro; // Declaração de uma variável do tipo Veiculo

    // Solicita ao usuário os dados do veículo
    printf("Informe a marca do veículo: ");
    scanf("%s", carro.marca); // Lê a marca do veículo atraves do %s e aplica o valor na variável carro.marca
    getchar();                // Limpa o buffer do teclado
    printf("Informe o modelo do veículo: ");
    scanf("%s", carro.modelo); // Lê o modelo do veículo
    getchar();                 // Limpa o buffer do teclado
    printf("Informe o ano de fabricação: ");
    scanf("%d", &carro.ano); // Lê o ano de fabricação do veículo
    getchar();               // Limpa o buffer do teclado
    printf("Informe o valor do veículo: ");
    scanf("%f", &carro.valor); // Lê o valor do veículo

    // Exibe os dados do veículo
    printf("\nDados do Veículo:\n");
    printf("Marca: %s\n", carro.marca);
    printf("Modelo: %s\n", carro.modelo);
    printf("Ano: %d\n", carro.ano);
    printf("Valor: R$ %.2f\n", carro.valor);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}