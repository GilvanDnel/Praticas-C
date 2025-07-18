/*Desenvolva um programa que contenha um vetor de float:
1 – O vetor deverá armazenar 4 notas;
2 – Neste momento inicial, vamos declarar e inicializar as notas;
3 – Em seguida, utilizando um laço For , imprima cada posição do
vetor;*/

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main()
{
    int i;                                 // Variável de controle do loop
    float notas[4] = {7.5, 8.0, 6.5, 9.0}; // Declaração e inicialização do vetor de notas
    
    // Loop para percorrer o vetor e imprimir cada nota
    for (i = 0; i < 4; i++)
    {
        printf("Nota %d: %.2f\n", i + 1, notas[i]); // Imprime a nota na posição i com duas casas decimais
    }
}