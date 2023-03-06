#include "filaCliente.h"

void filaVazia(TipoFila *fila){
    fila->frente = (TipoApontador)malloc(sizeof(TipoCelula));
    fila->tras = fila->frente;
    fila->frente->proximo = NULL;
}

void enfileira(TipoFila *fila, TipoCliente *cliente){
    TipoApontador novo;
    novo = (TipoApontador)malloc(sizeof(TipoCelula));
    if(novo == NULL) return;

    fila->tras->proximo = novo;
    fila->tras = novo;
    novo->cliente = *cliente;
    novo->proximo = NULL;
}

void desinfileira(TipoFila *fila){
    TipoApontador aux;
    if(fila->frente == fila->tras) return;

    aux = fila->frente;
    fila->frente = fila->frente->proximo;
    
    TipoCliente *cliente;
    *cliente = fila->frente->cliente;
    free(aux);
}

void imprimeFila(TipoFila *fila){
    TipoApontador aux;
    aux = fila->frente->proximo;

    while(aux != NULL){
        printf("Cliente: %d\n", aux->cliente.numero);
        printf("Número da Conta: %d\n", aux->cliente.numeroConta);
        printf("Nome: %s\n\n", aux->cliente.nome);
        aux = aux->proximo;
    }
}