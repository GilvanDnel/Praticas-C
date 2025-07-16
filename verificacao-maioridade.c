/*Crie um programa em linguagem C que:
Solicite ao usuário que digite sua idade.
Use uma variável booleana para verificar se o usuário é maior de idade
(idade >= 18).
Mostre na tela uma mensagem informando se a pessoa é maior de idade
ou menor de idade.*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool emaio = true;   // Variável booleana para maior de idade (não usada corretamente no código)
    bool emenor = false; // Variável booleana para menor de idade (não usada)
    int idade;           // Variável para armazenar a idade do usuário

    printf("Digite sua idade: "); // Solicita a idade ao usuário
    scanf("%d", &idade);         // Lê a idade digitada

    if (idade >= 18)             // Verifica se a idade é maior ou igual a 18
    {
        idade = emaio;           // (Incorreto: está sobrescrevendo a idade, deveria usar a variável booleana)
        printf("Usuario ja é adulto"); // Exibe mensagem de maior de idade
    }
    else
    {
        printf("Usuario menor de idade"); // Exibe mensagem de menor de idade
    }
    return 0; // Finaliza o programa
}
