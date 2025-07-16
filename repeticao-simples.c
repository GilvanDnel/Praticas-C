#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main()
{
    int contador; // Declara uma variável inteira chamada contador

    // Laço for que inicia contador em 1, executa enquanto contador <= 10, incrementando 1 a cada iteração
    for (contador = 1; contador <= 10; contador++)
        ; // Corpo vazio: não faz nada em cada iteração

    // Após o laço, contador vale 11 (pois o laço termina quando contador > 10)
    printf("%d", contador); // Imprime o valor de contador
}
