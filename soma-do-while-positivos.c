/* Desenvolva um programa que peça para o usuário digitar
números inteiros positivos. O programa deve continuar pedindo
números até que o usuário digite um número negativo. Ao final, o
programa deve mostrar a soma de todos os números positivos
digitados.*/

#include <stdio.h>

int main()
{
    int num, soma = 0; // Variáveis para armazenar o número digitado e a soma total

    printf("Digite os valores que deseja somar: \n");
    printf("O programa para quando digitar numero negativo\n");

    do
    {
        printf("Número: \n");
        // Lê o número digitado pelo usuário e verifica se a entrada é válida
        if (scanf("%d", &num) != 1)
        {
            printf("Erro! Digite um numero superior a 0\n");
            // Limpa o buffer do teclado em caso de entrada inválida
            while (getchar() != '\n')
                ;
            continue; // Pede novamente o número
        }

        // Se o número for negativo, encerra o loop
        if (num < 0)
        {
            break;
        }
        soma += num; // Soma o número positivo à variável soma
    } while (num >= 0);

    // Exibe o resultado da soma
    printf("A soma total é : %d\n", soma);

    return 0;
}
