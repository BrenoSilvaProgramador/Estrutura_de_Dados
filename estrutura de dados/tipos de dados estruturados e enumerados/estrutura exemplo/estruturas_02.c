#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} estrutura_data;

typedef struct
{
    char nome[50];
    long long int telefone;
    estrutura_data nascimento;
} estrutura_itens;

int main ()
{
    printf("------------------------ Dados 01 -------------------------\n\n");
    estrutura_itens dados;

    printf("Digite seu nome: ");
    scanf("%s", &dados.nome);
    setbuf(stdin, NULL);

    printf("Digite o seu telefone: ");
    scanf("%i", &dados.telefone);
    setbuf(stdin, NULL);

    printf("Digite a data de nascimento: ");
    scanf("%d %d %d", &dados.nascimento.dia, &dados.nascimento.mes, &dados.nascimento.ano);
    printf("\n\nNome: %s\nNumero: %i\nData de nascimento: %d/%d/%d\n\n", dados.nome, dados.telefone, dados.nascimento.dia, dados.nascimento.mes, dados.nascimento.ano);

    getchar();
    return 0;
}
