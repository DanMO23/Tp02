#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 10

// Estrutura do Cliente
typedef struct cliente{
    int numero;
    char nome[50];
    int numeroConta;
} TipoCliente;

// Estrutura de Pilha em Arranjo
typedef int Apontador;
typedef struct pilha{
    TipoCliente cliente[TAM];
    Apontador topo;
} TipoPilha;

// Operações do Cliente
void insereCliente(TipoCliente *cliente, int numero, int numeroConta, char *nome);

// Operações de Pilha
void pilhaVazia(TipoPilha *pilha);
void empilha(TipoPilha *pilha, TipoCliente *cliente);
void desimpilha(TipoPilha *pilha);
void imprimePilha(TipoPilha *pilha);
