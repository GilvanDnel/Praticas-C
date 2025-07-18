/*Desenvolva um programa que pergunte ao usuário quantos nomes ele gostaria
de cadastrar, em seguida, o usuário deverá informar cada nome completo de
acordo com a quantidade informada.
Cada nome completo deverá ter no máximo 100 caracteres.
Exiba ao final todos os nomes cadastrados.*/

#include <stdio.h>
#include <string.h>

int main() {
    int quantidade; // Variável para armazenar a quantidade de nomes
    printf("Quantos nomes você gostaria de cadastrar? ");
    scanf("%d", &quantidade);
    getchar(); // Limpa o buffer do teclado após a leitura do inteiro

    // Declara uma matriz de strings para armazenar os nomes, cada um com até 100 caracteres (+1 para o '\0')
    char nomes[quantidade][101];

    // Loop para ler os nomes do usuário
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o nome %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        // Remove o caractere de nova linha ('\n') do final da string, se existir
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    // Exibe os nomes cadastrados
    printf("Nomes cadastrados:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}