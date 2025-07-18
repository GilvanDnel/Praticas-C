/*Desenvolva um programa onde o usuário digite 5 números inteiros e o
programa utilize 2 laços FOR, sendo um para armazenar esses valores em um
vetor e outro para exibir os valores armazenados.*/

#include <stdio.h>

int main ()
{
    int numeros[5]; // Declaração do vetor para armazenar 5 números inteiros
    int i; // Variável de controle do loop

    // Laço FOR para ler os 5 números inteiros do usuário
    for (i = 0; i < 5; i++)
    {
        printf("Digite o número %d: ", i + 1); // Solicita o número ao usuário
        scanf("%d", &numeros[i]); // Armazena o número no vetor
    }

    printf("Números digitados: \n"); // Mensagem antes de exibir os números

    // Laço FOR para exibir os números armazenados no vetor
    for (i = 0; i < 5; i++)
    {
        printf("Na %dª posição: %d\n",i, numeros[i]); // Imprime cada número do vetor
    }

    return 0; // Indica que o programa terminou com sucesso
}