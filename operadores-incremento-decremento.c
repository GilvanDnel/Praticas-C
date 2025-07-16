/* Crie um Controlador de Passos em Linguagem C. O programa deve:
    Iniciar uma variável chamada passos com valor 0.
    Mostrar o valor atual de passos.
    Usar o operador de incremento (++) para simular 3 passos à frente.
    Mostrar novamente o valor da variável passos.
    Usar o operador de decremento (--) para simular 1 passo para trás.
    Mostrar o valor final da variável passos. */

#include <stdio.h>
#include <stdbool.h>

int main()
{
     int passos = 0; // Inicializa a variável passos com 0

     printf("Valor inicial de passos: %d\n", passos); // Mostra o valor inicial

     passos += 3; // Incrementa 3 passos (simula 3 passos à frente)
     printf("Valor após 3 passos à frente: %d\n", passos); // Mostra o valor após incremento

     passos -= 1; // Decrementa 1 passo (simula 1 passo para trás)
     printf("Valor após 1 passo para trás: %d\n", passos); // Mostra o valor final

     return 0;
}
