/*Crie um programa em linguagem C que:
Peça ao usuário para digitar sua idade.
Pergunte se ele possui ingresso (1 para SIM, 0 para NÃO).
Verifique se ele pode entrar no cinema com as seguintes regras:
A entrada só é permitida se a pessoa tiver 14 anos ou mais.
E também se tiver ingresso.
Mostre uma mensagem informando se a pessoa pode entrar ou não pode entrar*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int idade, Passe; // Variáveis para armazenar a idade e se possui ingresso
    bool Passa = true;    // Variável booleana para indicar permissão de entrada
    bool naoPassa = false; // Variável booleana para indicar negação de entrada

    printf("Qual sua idade: "); // Solicita a idade do usuário
    scanf("%d%", &idade); // Lê a idade digitada pelo usuário (OBS: o '%' após %d está incorreto)

    if (idade >= 14) // Verifica se a idade é maior ou igual a 14
    {
        printf("Voce possui idade minima, confirme se possui um ingreço? Digite:\n 1-para sim\n 0-para não \n");
        scanf("%d%", &Passe); // Lê se o usuário possui ingresso (OBS: o '%' após %d está incorreto)

        if (Passe != 1 && Passe != 0) // Verifica se o valor digitado é válido (apenas 0 ou 1)
        {
            printf("Valor invalido, digite 0 para não possui ou 1 para possui: ");
            scanf("%d", &Passe); // Solicita novamente um valor válido
        }
        else if (Passe == 0 && Passe != 1) // Se não possui ingresso
        {
            Passe = naoPassa; // Define que não pode passar
            printf("Possui idade minima mas não possui ingreço, não pode entrar no cinema.");
        }
        else if (Passe == 1 && Passe != 0) // Se possui ingresso
        {
            Passe = Passa; // Define que pode passar
            printf("Possui idade minima e ingreço, pode entrar no cinema");
        }
        else
        {
            printf("Não possui idade minima."); // Caso não atenda aos critérios
        }
    }
    return 0; // Finaliza o programa
}
