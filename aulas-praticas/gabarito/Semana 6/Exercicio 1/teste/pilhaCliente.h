#include <stdio.h>  
#include <stdlib.h>
#include <string.h>

typedef struct cliente{
    int numero;
    char nome[50];
    int numeroConta;
}TipoCliente;

typedef struct celula* Apontador;
typedef struct celula{
    TipoCliente cliente;
    Apontador proximo;
}tCelula;

typedef struct{
    Apontador topo;
    int tamanho;
}Pilha;

void FazPilhaVazia(Pilha* pilha);
int LehPilha(Pilha* pilha);
void Empilha(Pilha* pilha, TipoCliente* cliente);
void Desempilha(Pilha* pilha);
void insereCliente(TipoCliente* cliente, char* nome, int numero, int numeroConta);
void imprimePilha(Pilha *pilha);