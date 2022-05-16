#include <stdio.h>
#include<stdbool.h>

#define TOPO 10000

/*
    O programa adiciona 5 elementos na pilha estatica (retorna 0 ou 1 por ser do tipo bool), mostra a quantidade e o elemento do topo.
    Depois, o programa remove um elemento (retorna 0 ou 1 por ser do tipo bool) e mostra o total e a quantidade de elemento
*/

int pilhaEstatica[TOPO];
int disponivel=0;

bool inserePilhaEstatica (int elemento);
bool removePilhaEstatica ();
int totalPilhaEstatica();
int Topo ();
int inicioPilhaEstatica(int indice);

int main ()
{
    int elemento = 0, indice = 0, topo = 0, total = 0, inicio = 0;
    bool Inserir = 0, Remover = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Adicionar elemento na Pilha Estatica: ");
        scanf("%d", &elemento);

        Inserir = inserePilhaEstatica(elemento);
        printf("%d \n", Inserir);
    }
    printf("\n\n");

    topo = Topo();
    printf("Ultimo elemento: %d\n", topo);

    total = totalPilhaEstatica();
    printf("Quantidade de elementos : %d\n\n", total);

    Remover = removePilhaEstatica ();
    printf("( 1-> adicionou | 0 -> nao adicinou) ----> %d \n\n", Remover);

    topo = Topo();
    printf("Ultimo elemento: %d \n", topo);

    total = totalPilhaEstatica();
    printf("Quantidade de elementos : %d\n\n\n", total);

    /*
    printf("Selecione um valor e encontre sua posicao: ");
    scanf("%d", &indice);
    inicio = inicioPilhaEstatica(indice);
    printf("O elemento %d esta na posicao %d\n\n", indice, inicio);
    */

    getchar();
    return 0;
}
// Retorna o elemento do Indice

int inicioPilhaEstatica(int indice)
{
    if ( (indice >= 0) && (indice < disponivel))
    {
        return pilhaEstatica[indice];
    }
    else
    {
        return 0;
    }
}

// Retorna elemento do Topo
int Topo ()
{
    if (disponivel >= 0)
    {
        return pilhaEstatica[disponivel -1];
    }
    else
    {
        return 0;
    }

}

// Total de elementos
int totalPilhaEstatica()
{
    return disponivel;
}

// Removendo da Pilha Estatica
bool removePilhaEstatica ()
{
    if (disponivel > 0)
    {
        disponivel--;
        return true;
    }
    else
    {
        printf("Stack UnderFlow!");
        return false;
    }

}

// Inserção na Pilha Estatica:

bool inserePilhaEstatica (int elemento)
{
    if (disponivel < TOPO)
    {
        pilhaEstatica[disponivel] = elemento;
        ++disponivel;
        return true;
    }
    else
    {
        printf("Stack OverFlow!");
        return false;
    }

}
