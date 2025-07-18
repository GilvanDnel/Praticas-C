#include <stdio.h>


int main()
{
    int cont, numeros[10]; // Declara um contador e um vetor de 10 inteiros
    for (cont = 0; cont < 10; cont++) // Loop de 0 a 9
    {
        numeros[cont] = cont + 1; // Preenche o vetor com valores de 1 a 10
        printf("Contador:%d\n", numeros[cont]); // Imprime o valor atual do vetor
    }
}