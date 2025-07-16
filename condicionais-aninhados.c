/*Crie um programa em linguagem C que:
Peça ao usuário que digite a idade de uma pessoa.
Use uma constante chamada IDADE_MINIMA com valor 18.
Com o uso de if aninhado, o programa deve:
Verificar se a idade é maior ou igual a IDADE_MINIMA.
Se for, verificar:
Se a idade for maior que 60, imprimir: "Maior de idade e idoso."
Caso contrário, imprimir: "Maior de idade."
Caso a idade seja menor que IDADE_MINIMA, imprimir: "Menor de idade."*/

#include <stdio.h>

int main()
{
    const int IDADE_MINIMA = 18; // Define a idade mínima como constante
    int idade;

    printf("Digite sua idade: "); // Solicita a idade ao usuário
    scanf("%d", &idade);         // Lê a idade digitada

    if (idade >= IDADE_MINIMA) // Verifica se é maior ou igual à idade mínima
    {
        if (idade >= 60) // Se for maior ou igual a 60, é idoso
        {
            printf("Maior de idade e idoso");
        }
        else if (idade < 60) // Se for maior de idade, mas menor que 60
        {
            printf("Maior de idade");
        }
        // O else abaixo nunca será executado, pois já foi verificado acima
        // else
        // {
        //     printf("Menor de idade.");
        // }
    }
    // Se não for maior ou igual à idade mínima, é menor de idade
    else
    {
        printf("Menor de idade.");
    }

    return 0;
}
