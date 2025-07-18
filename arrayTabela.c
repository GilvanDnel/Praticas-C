/*
On the Code...

Desenvolva um programa para declarar e inicializar uma matriz em linguagem C para
armazenar os dados da matriz de prioridades abaixo.

IMPACTO
         BAIXO   MÉDIO   ALTO
ALTA       1       2       3
MÉDIA      2       3       4
BAIXA      3       4       5

Não é necessário exibir as legendas de criticidade (Alta, Média e Baixa)
Exiba como legendas, apenas Urgência e Impacto
*/





#include <stdio.h> // Inclui a biblioteca padrão para entrada e saída

#define LINHAS 3    // Define uma constante para o número de linhas da matriz
#define COLUNAS 3   // Define uma constante para o número de colunas da matriz

int main() {
    // Declara e inicializa a matriz de prioridades com os valores fornecidos
    // Cada linha representa uma urgência (Alta, Média, Baixa)
    // Cada coluna representa um impacto (Baixo, Médio, Alto)
    int matriz[LINHAS][COLUNAS] = {
        {1, 2, 3}, // Alta urgência
        {2, 3, 4}, // Média urgência
        {3, 4, 5}  // Baixa urgência
    };

    // Exibe o título da matriz
    printf("Matriz de Prioridades:\n");
    // Exibe as legendas das colunas (Impacto)
    printf("Urgência\\Impacto\tBaixo\tMédio\tAlto\n");
    
    // Percorre cada linha da matriz
    for (int i = 0; i < LINHAS; i++) {
        // Exibe a legenda da linha (Urgência) usando switch
        switch (i) {
            case 0: printf("Alta\t\t"); break;
            case 1: printf("Média\t\t"); break;
            case 2: printf("Baixa\t\t"); break;
        }
        // Percorre cada coluna da matriz e exibe o valor correspondente
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        // Quebra de linha após exibir uma linha completa da matriz
        printf("\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}