/*Crie um programa em linguagem C que:
Peça ao usuário para digitar os valores de uma matriz 2x2 de números inteiros.
Some todos os elementos digitados da matriz.
Multiplique todos os elementos digitados na matriz
Mostre os resultados na tela.*/

include <stdio.h>
#define LINHAS 2
#define COLUNAS 2
int main() {
    int matriz[LINHAS][COLUNAS]; // Declara a matriz 2x2
    int soma = 0; // Variável para armazenar a soma dos elementos
    int produto = 1; // Variável para armazenar o produto dos elementos

    // Loop para ler os valores da matriz
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j]; // Soma o elemento atual
            produto *= matriz[i][j]; // Multiplica o elemento atual
        }
    }

    // Exibe os resultados
    printf("Soma dos elementos da matriz: %d\n", soma);
    printf("Produto dos elementos da matriz: %d\n", produto);

    return 0; // Indica que o programa terminou com sucesso
}