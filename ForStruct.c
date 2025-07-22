/*Desenvolva um programa que implemente uma struct chamada aluno,
onde o mesmo possua matricula, nome e 4 notas. Em seguida, declare um vetor
chamado turma para armazenar os dados de 3 alunos.

Usando o Laço FOR os dados deverão ser inseridos pelo usuário e exibidos

ao final.*/

#include <stdio.h>  // Inclui a biblioteca padrão para entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings

int main()
{
    // Declaração da struct Aluno
    struct Aluno
    {
        int matricula;  // Matrícula do aluno
        char nome[50];  // Nome do aluno
        float notas[4]; // Notas do aluno (4 notas)
    };

    struct Aluno turma[3]; // Declaração de um vetor para armazenar 3 alunos

    // Laço FOR para inserir os dados dos alunos
    for (int i = 0; i < 3; i++) 
    {
        printf("Informe os dados do aluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &turma[i].matricula); // Lê a matrícula do aluno
        getchar();                        // Limpa o buffer do teclado
        printf("Nome: ");
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin); // Lê o nome do aluno
        turma[i].nome[strcspn(turma[i].nome, "\n")] = 0;    // Remove o newline no final da string

        // Lê as notas do aluno
        for (int j = 0; j < 4; j++)
        {
            printf("Nota %d: ", j + 1);
            scanf("%f", &turma[i].notas[j]); // Lê cada nota
        }
    }


    //Repare que no for acima, usamos o fgets para ler o nome do aluno,
    //isso é importante para evitar problemas com espaços em branco no nome.
    //Tambpm usamos strcspn para remover o caractere de nova linha que o fgets pode deixar no final da string.
    //Alem disso, usamos getchar() para limpar o buffer do teclado após ler a matrícula.
    //Isso é importante para evitar problemas com a leitura de strings.
    //Tambem usamos o sizeof para garantir que não ultrapassamos o tamanho do array de caracteres.
    
    /*Você também perceberá que usamos i e j para controlar os laços FOR,
    onde i controla o número de alunos e j controla as notas de cada aluno.
    E abaixo vamos novamente declarar e usar as variaveis i e j para exibir os dados dos alunos. Mas como podemos declarar 
    variaveis com o mesmo nome num mesmo programa? É simples, as variaveis i e j usadas acima estão no escopo local, e não no local, ou seja
    no momente que o laço for onde elas foram declaradas termina, é como se esta variavel deixasse de existir, pois o codigo entra no escopo global e sai do local.
    É como voce sair de um banheiro que tem papel higienico e entrar em outro banheiro que não tem, apesar de os dois banheiros fazerem parte da mesma casa. E colocar papel
    higienico novo no banheiro que está sem, não anula a existencia do papel que existe no outro banheiro. Porém para usar o papel do outro banheiro voce precisa sair do 
    banheiro atual (escopo local) entrar no corredor da casa (escopo global) e seguir em direção ao outro banheiro (outro escopo local) para poder usar o papel desse banheiro. 
    */


    // Exibe os dados dos alunos
    printf("\nDados dos Alunos:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nAluno %d:\n", i + 1);
        printf("Matrícula: %d\n", turma[i].matricula);
        printf("Nome: %s\n", turma[i].nome);
        for (int j = 0; j < 4; j++)
        {
            printf("Nota %d: %.2f\n", j + 1, turma[i].notas[j]);
        }
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
