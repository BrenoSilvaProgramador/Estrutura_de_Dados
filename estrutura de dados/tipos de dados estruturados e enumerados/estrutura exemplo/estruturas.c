#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char titulo[50];
    char producao[50];
    int temporada;
    float preco;
} serie;

typedef struct {
    char nome[50];
    long long int cpf;
    int idade;
    long long int numero;
} nome;

int main () {

    serie s1 = {"Doctor Who", "BBC", 1, 5.00};
    printf("----------- Serie 01 -----------\n\nTitulo: %s\nProducao: %s\nTemporada: %i\nPreco: %.2f\n\n", s1.titulo, s1.producao, s1.temporada, s1.preco);

    nome n1 = {"Breno Silva Mendonca", 456789, 20, 12345678};
    printf("----------- Usuario 01 ----------\n\nNome: %s\nCPF: %i\nIdade: %i\nNumero: %i\n\n", n1.nome, n1.cpf, n1.idade, n1.numero);

    getchar();
    return 0;
}
