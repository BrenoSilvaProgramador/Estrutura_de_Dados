#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char RG[20];
    int CPF;
    char Nome[40];
    int idade;
    char expeditor[40];
} estrutura_dados;


int main ()
{

    int i = 0;
    estrutura_dados dados[2];

    for (i = 0; i < 2; i++)
    {
        printf("Escreva seu nome completo: ");
        fgets(dados[i].Nome, 40, stdin);
        setbuf(stdin, NULL);

        printf("Escreva sua idade: ");
        scanf("%d", &dados[i].idade);
        setbuf(stdin, NULL);

        printf("Escreva seu RG: ");
        fgets(dados[i].RG, 20, stdin);
        setbuf(stdin, NULL);

        printf("Escreva seu CPF: ");
        scanf("%i", &dados[i].CPF);
        setbuf(stdin, NULL);

        printf("Escreva seu Orgao Expeditor: ");
        fgets(dados[i].expeditor, 40, stdin);
        setbuf(stdin, NULL);

        printf("\n");

    }

    printf("\n\n");

    for (i = 0; i < 2; i++)
    {
        printf(" ------------------ Dados %i --------------------------------", i+1);
        printf("\nSeu Nome e: %s", dados[i].Nome);
        printf("Sua idade e: %d anos", dados[i].idade);
        printf("\nSeu RG e: %s", dados[i].RG);
        printf("Seu CPF e: %d", dados[i].CPF);
        printf("\nSeu Orgao expeditor e: %s", dados[i].expeditor);
        printf("\n");

    }

    getchar();
    return 0;
}
