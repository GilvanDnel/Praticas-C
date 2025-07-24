#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída

int main() {
    // Declara e inicializa uma matriz 2x3
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int linha, coluna, novoValor; // Variáveis para armazenar linha, coluna e novo valor

    // Exibe os valores atuais da matriz
    printf("Valores atuais da matriz 2x3:\n");
    for(int lin = 0; lin < 2; lin++) { // Percorre as linhas
        for(int col = 0; col < 3; col++) { // Percorre as colunas
            printf("%d ", matriz[lin][col]); // Imprime o valor da posição atual
        }
        printf("\n"); // Quebra de linha após cada linha da matriz
    }

    // Solicita ao usuário a linha que deseja alterar
    printf("\nInforme o número da linha (0 a 1):\n");
    scanf("%d", &linha);

    // Solicita ao usuário a coluna que deseja alterar
    printf("Informe o número da coluna (0 a 2):\n");
    scanf("%d", &coluna);

    // Solicita ao usuário o novo valor para a posição escolhida
    printf("Informe o novo valor para a posição [%d][%d]: ", linha, coluna);
    scanf("%d", &novoValor);

    // Atualiza o valor na matriz
    matriz[linha][coluna] = novoValor;

    // Exibe a matriz atualizada
    printf("\nMatriz atualizada:\n");
    for(int lin = 0; lin < 2; lin++) {
        for(int col = 0; col < 3; col++) {
            printf("%d ", matriz[lin][col]);
        }
        printf("\n"); // Quebra de linha após cada linha da matriz
    }

    return 0; // Finaliza o programa
}