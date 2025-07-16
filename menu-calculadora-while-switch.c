/*Desenvolva um programa que exiba um menu de opções para o
usuário realizar operações matemáticas simples: somar, subtrair,
multiplicar ou dividir dois números. O programa deve utilizar um laço
while para repetir até que o usuário escolha sair (opção 0). Use o
comando switch case para executar a operação escolhida.*/

#include <stdio.h>

int main()
{
    int opcao;                   // Variável para armazenar a opção escolhida pelo usuário
    float num1, num2, resultado; // Variáveis para os números e o resultado

    do
    {
        // Exibe o menu de opções
        printf("Menu de Operações:\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");

        scanf("%d", &opcao); // Lê a opção escolhida pelo usuário

        if (opcao != 0 && opcao >= 1 && opcao <= 4)
        { // Verifica se o usuário escolheu sair
            // Solicita os dois números para a operação
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);

            // Executa a operação escolhida usando switch case
            switch (opcao)
            {
            case 1:
                resultado = num1 + num2; // Soma
                printf("Resultado da soma: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2; // Subtração
                printf("Resultado da subtração: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2; // Multiplicação
                printf("Resultado da multiplicação: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0)
                {                            // Verifica se não há divisão por zero
                    resultado = num1 / num2; // Divisão
                    printf("Resultado da divisão: %.2f\n", resultado);
                }
                else
                {
                    printf("Erro: Divisão por zero não é permitida.\n");
                }
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
            }
        } 
        else if (opcao == 0) 
        {
            // Se o usuário escolher sair, exibe mensagem de encerramento
            printf("Saindo do programa...\n");
        }
        else
        {
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        }
    } while (opcao != 0); // Continua até que o usuário escolha sair

    printf("Programa encerrado.\n"); // Mensagem de encerramento
    return 0;                        // Indica que o programa terminou com sucesso
}