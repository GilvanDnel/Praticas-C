#include <stdio.h>
#include <string.h>

int main() {
    // Declara uma matriz de strings para armazenar 5 nomes, cada um com até 49 caracteres (+1 para o '\0')
    char nomes[5][50];

    // Loop para ler 5 nomes do usuário
    for (int cont = 0; cont < 5; cont++) {
        printf("Digite o nome %d: ", cont + 1);
        // Lê uma linha do teclado e armazena em nomes[cont]
        fgets(nomes[cont], 50, stdin);
        // Remove o caractere de nova linha ('\n') do final da string, se existir
        nomes[cont][strcspn(nomes[cont], "\n")] = '\0';
    }

    // Exibe os nomes digitados
    printf("Nomes digitados:\n");
    for (int cont = 0; cont < 5; cont++) {
        printf("%s\n", nomes[cont]);
    }

    return 0;
}