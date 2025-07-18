#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main()
{
    // Declarando e já inicializando o vetor com 5 elementos
    int numeros[5] = {1, 2, 3, 4, 5};
    int cont; // Variável para controle do loop

    printf("Elementos do vetor:"); // Exibe mensagem inicial

    // Loop para percorrer e imprimir cada elemento do vetor
    for (cont = 0; cont < 5; cont++)
    {
        printf("%d ", numeros[cont]); // Imprime o elemento atual do vetor
    }

    printf("\n"); // Quebra de linha ao final da impressão
    return 0; // Indica que o programa terminou com sucesso
}
