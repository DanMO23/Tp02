#include "filaCliente.h"

int main(){
    TipoCliente cliente;
    Pilha pilha;
    Fila fila;
    FazPilhaVazia(&pilha);
    filaVazia(&fila);

    char nome[50];
    strcpy(nome, "Estela");
    int numero = 1;
    int numeroConta = 123;
    insereCliente(&cliente, nome, numero, numeroConta);
    Empilha(&pilha, &cliente);
    enfileira(&fila, &cliente);

    numero = 2;
    numeroConta = 321;
    insereCliente(&cliente, nome, numero, numeroConta);
    Empilha(&pilha, &cliente);
    enfileira(&fila, &cliente);

    numero = 3;
    numeroConta = 231;
    insereCliente(&cliente, nome, numero, numeroConta);
    Empilha(&pilha, &cliente);
    enfileira(&fila, &cliente);

    Desempilha(&pilha);
    desinfileira(&fila);

    printf("---------- PILHA ----------\n");
    imprimePilha(&pilha);
    printf("\n\n");

    printf("----------- FILA -----------\n");
    imprimeFila(&fila);
    printf("\n\n");
}   