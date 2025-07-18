/*Situação-Problema: Controle de Estoque de uma Loja de Informática
A loja Info Tech vende diversos componentes eletrônicos e precisa de um programa para ajudar
no controle de estoque de produtos. O gerente da loja, deseja um sistema simples, que permita
armazenar, consultar e atualizar a quantidade de produtos em estoque de diferentes categorias (ex:
processadores, placas de vídeo, memórias RAM etc.).
Cada categoria pode ter até 3 produtos diferentes, e a loja trabalha com 4 categorias no total.
O sistema deve:
1. Usar uma matriz de inteiros [4][3] para armazenar a quantidade de cada produto em estoque,
onde:
o cada linha representa uma categoria,
o cada coluna representa um produto daquela categoria.
2. Exibir um menu de opções com as seguintes funcionalidades:
o (1) Exibir estoque completo (mostrar todos os dados da matriz).
o (2) Atualizar a quantidade de um produto (usuário informa categoria, produto e nova
quantidade).
o (3) Verificar se algum produto está com estoque zero e exibir uma mensagem de alerta
se for o caso.
o (4) Exibir o total de produtos por categoria (soma de cada linha da matriz).
o (0) Sair do programa.
3. Utilizar vetores de strings para associar nomes às categorias e aos produtos.
4. Incluir comentários no código explicando cada parte do programa.
5. Usar:
o variáveis e tipos de dados adequados,
o expressões aritméticas para calcular totais,
o operadores relacionais e lógicos nas verificações,
o estruturas de repetição e controle de fluxo para o menu e as operações.*/

#include <stdio.h>  // Inclui a biblioteca padrão para entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings

#define CATEGORIAS 4 // Define o número de categorias
#define PRODUTOS 3   // Define o número de produtos por categoria

// Inicialização do programa principal
int main()
{
    // Após declarar o programa principal declaramos a variável estoque que se torna uma matriz para armazenar a quantidade de produtos em estoque;
    int estoque[CATEGORIAS][PRODUTOS] = {
        {10, 5, 0}, // Categoria 1: Processadores
        {3, 8, 2},  // Categoria 2: Placas de Vídeo
        {15, 0, 7}, // Categoria 3: Memórias RAM
        {4, 6, 1}   // Categoria 4: Armazenamento
    };
    // Declaração dos vetores de strings para os nomes das categorias e produtos
    char categorias[CATEGORIAS][20] = {"Processadores", "Placas de Vídeo", "Memórias RAM", "Armazenamento"};
    char protutos[PRODUTOS][20] = {"Produto 1", "Produto 2", "Produto 3"};
    int opcao; // Variável para armazenar a opção escolhida pelo usuário

    // Loop principal do menu
    do
    {
        printf("\n###############################################");
        printf("\n#Desenvolvido por Andrew Moura e Gilvan Daniel#");
        printf("\n###############################################\n");
        printf("\nMenu de Controle de Estoque:\n");
        printf("1. Exibir estoque completo\n");
        printf("2. Atualizar quantidade de um produto\n");
        printf("3. Verificar produtos com estoque zero\n");
        printf("4. Exibir total de produtos por categoria\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao); // Lê a opção escolhida pelo usuário
        getchar();           // Limpa o buffer do teclado

        switch (opcao)
        {
        case 1: // Se o usuario marcar a opção 1 o menu vai exibir estoque completo
            printf("\nEstoque Completo:\n");
            for (int i = 0; i < CATEGORIAS; i++) // Percorre as categorias usando uma variavel de controle 'i'
            {
                printf("%s:\n", categorias[i]);    // Exibe o nome da categoria
                for (int j = 0; j < PRODUTOS; j++) // Percorre os produtos usando uma variavel de controle 'j'
                {
                    // Exibe o nome do produto e a quantidade em estoque
                    printf("  %s: %d\n", protutos[j], estoque[i][j]); // Exibe o nome do produto e a quantidade em estoque
                }
            }
            break;

            case 2: // Atualizar quantidade de um produto
            {
                int cat, prod, novaQuantidade; // Variáveis para armazenar a categoria, produto e nova quantidade
                printf("\nAtualizar Quantidade de um Produto:\n");
                printf("Informe a categoria (0 a %d): ", CATEGORIAS - 1);         // Solicita a categoria ao usuário
                scanf("%d", &cat);                                                // Lê a categoria escolhida
                printf("Informe o produto (0 a %d): ", PRODUTOS - 1);             // Solicita o produto ao usuário
                scanf("%d", &prod);                                               // Lê o produto escolhido
                printf("Informe a nova quantidade: ");                            // Solicita a nova quantidade ao usuário
                scanf("%d", &novaQuantidade);                                     // Lê a nova quantidade
                if (cat >= 0 && cat < CATEGORIAS && prod >= 0 && prod < PRODUTOS) // Verifica se a categoria e o produto são válidos
                {
                    estoque[cat][prod] = novaQuantidade;            // Atualiza a quantidade do produto na categoria
                    printf("Quantidade atualizada com sucesso!\n"); // Exibe mensagem de sucesso
                }
                else
                {
                    printf("Categoria ou produto inválido!\n"); // Exibe mensagem de erro se a categoria ou produto forem inválidos
                }
            }
            break;

            case 3: // Verificar produtos com estoque zero
                printf("\nProdutos com estoque zero:\n");
                int encontrouZero = 0;
                for (int i = 0; i < CATEGORIAS; i++) // Percorre as categorias
                {
                    for (int j = 0; j < PRODUTOS; j++) // Percorre os produtos
                    {
                        if (estoque[i][j] == 0) // Verifica se o estoque do produto é zero
                        {
                            printf("%s - %s\n", categorias[i], protutos[j]); // Exibe o nome da categoria e do produto
                            encontrouZero = 1;                               // Marca que encontrou pelo menos um produto com estoque zero
                        }
                    }
                }
                if (!encontrouZero) // Se não encontrou nenhum produto com estoque zero
                {
                    printf("Nenhum produto com estoque zero.\n"); // Exibe mensagem informando que não há produtos com estoque zero
                }


                break;

            case 4: // Exibir total de produtos por categoria
                printf("\nTotal de produtos por categoria:\n");
                for (int i = 0; i < CATEGORIAS; i++) // Percorre as categorias
                {
                    int total = 0;                     // Variável para armazenar o total de produtos na categoria
                    for (int j = 0; j < PRODUTOS; j++) // Percorre os produtos
                    {
                        total += estoque[i][j]; // Soma a quantidade de produtos na categoria
                    }
                    printf("%s: %d produtos\n)", categorias[i], total); // Exibe o total de produtos na categoria
                }
                break;

            case 0: // Sair do programa
                printf("Saindo do programa...\n");
                break;


            default: // Caso a opção não seja válida
                printf("Opção inválida! Por favor, escolha uma opção válida.\n");
            }
        } while (opcao != 0); // Continua o loop até que o usuário escolha a opção 0 para sair
    

// Finaliza o programa
printf("Obrigado por usar o sistema de controle de estoque!\n");

return 0; // Indica que o programa terminou com sucesso
}
