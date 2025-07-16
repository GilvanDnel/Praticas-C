/*Desenvolva um programa que peça para o usuário digitar
números inteiros e some esses números. O programa deve parar de
pedir números quando o usuário digitar zero (0). No final, exiba a
soma total dos números digitados (exceto o zero).*/

#include <stdio.h> // biblioteca para uso do scanf

// declaraçao do programa principal
int main()
{
    // declaração de variaveis
    int n1, soma = 0;

    // mensagem de saudação
    printf("Digite os valores que deseja somar ou 0 para interromper a execução:\n");

    // uso da ferramenta while
    while (1)
    {
        printf("Digite um numero: ");

        // condição para orientar o usuario a digitar um valor valido
        if (scanf("%d", &n1) != 1)
        {
            printf("Entrada inválida. Por favor digite um numero válido.\n");
            while (getchar() != '\n')
                ;
            continue;
        }
        // condicional para fazer valer a parada do codigo;
        if (n1 == 0)
        {
            break; //
        }
        // apos digitar 0  o programa pegas os dados digitados e realiza a soma entre eles;
        soma += n1;
    }

    // imprime o resultado da soma ao usuario;
    printf("A soma total dos números digitados é: %d\n", soma);

    // indica que o programa foi executado e finalizado com sucesso e sem erros.
    return 0;
}
