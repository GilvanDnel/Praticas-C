/*desenvolva um programa que
declare e inicialize uma matriz de dados do tipo float com suas próprias
dimensões de linha e coluna:
1 – Você mesmo define um valor fixo de linhas e colunas da matriz;
2 – Você mesmo define os valores float que irá preencher em cada
posição(índice) da sua matriz.
Ex:Notas, Preço, Temperatura...*/

#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3
int main() {
    // Declara e inicializa uma matriz de float com valores fixos
    float matriz[LINHAS][COLUNAS] = {
        {1.5, 2.3, 3.1},
        {4.0, 5.6, 6.2},
        {7.8, 8.4, 9.9}
    };

    // Exibe os valores da matriz
    printf("Matriz de float:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}