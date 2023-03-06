#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
    char nome[100];
    char cpf[12];
}Tcliente;

typedef struct Celula* Apontador;
typedef struct Celula
{
    Tcliente cliente;
    struct Celula* proximo; //Apontador para o proximo
}Tcelula;
typedef struct 
{
    Apontador primeiro;
    Apontador ultimo;
}Tlista;

void listaVazia(Tlista *lista);
void lehVazia(Tlista *lista);
void insereLista(Tlista *lista, Tcliente *cliente);
void retiraLista(Tlista *lista, Tcliente *cliente);
void imprime(Tlista *lista);


