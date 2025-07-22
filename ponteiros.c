#include <stdio.h>

int main()
{
    // Declaração de uma variável inteira
    int idade = 37;
    // Declaração de um ponteiro do tipo inteiro
    int *pnt_idade;

    // O ponteiro recebe o endereço da variável idade
    pnt_idade = &idade;
    /* O operador & obtém o endereço de memória da variável idade e por sua vez
    pnt_idade atraves do operador =  recebe esse endereço. Logo se na memoria exitem 10 espaços
    e essa variavel ocupa o espaço 5, o ponteiro pnt_idade receberá o endereço 5, ou seja,
    o endereço fisico onde a variavel idade está armazenada na memoria do computador.*/

    // Imprime o valor da variável idade
    printf("A Idade e: %d", idade);

    // Imprime o endereço de memória da variável idade
    printf("\nO endereco fisico da idade e: %p", &idade); // & obtém o endereço de memória da variável idade e %p formata o endereço como ponteiro

    // Imprime o valor armazenado no ponteiro (endereço de idade)
    printf("\nO valor da variavel pnt_idade que armazenou o endereco fisico de idade: %p\n", pnt_idade); // %p formata o endereço como ponteiro

    // Imprime o valor apontado pelo ponteiro (conteúdo de idade)
    printf("\nO valor armazenado no endereco apontado por ponteiro é: %d", *pnt_idade);
    // O operador * obtém o valor armazenado no endereço apontado por pnt_idade, ou seja, o valor da variável idade que é 37.

    return 0;
}