#include <stdio.h>

int main()
{
    int contador = 10; // Inicializa a variável contador com valor 10
    // Loop for que decrementa o contador até 0 (inclusive)
    for (contador; contador >= 0; contador--)
    {
        printf("%d,", contador); // Imprime o valor atual de contador seguido de uma vírgula
    }
    return 0; // Indica que o programa terminou com sucesso
}
