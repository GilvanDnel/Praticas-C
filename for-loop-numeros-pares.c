/* Desenvolva um programa que utilize o laço de repetição for para imprimir na tela
os números pares de 0 a 20, um por linha. */

#include <stdio.h>

int main()
{
    int contador;
    // Loop de 0 até 20, incrementando de 1 em 1
    for (contador = 0; contador <= 20; contador++)
    {
        // Verifica se o número é par
        if (contador % 2 == 0)
        {
            // Imprime o número par
            printf("%d\n", contador);
        }
    }
    return 0;
}
