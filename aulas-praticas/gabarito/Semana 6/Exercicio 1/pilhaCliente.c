#include "pilhaCliente.h"

void insereCliente(TipoCliente *cliente, int numero, int numeroConta, char *nome){
    cliente->numero = numero;
    cliente->numeroConta = numeroConta;
    strcpy(cliente->nome, nome);
}

void pilhaVazia(TipoPilha *pilha){
    pilha->topo = 0;
}

void empilha(TipoPilha *pilha, TipoCliente *cliente){
    if(pilha->topo == TAM) return;

    // empilhando
    pilha->cliente[pilha->topo] = *cliente;
    pilha->topo++;
}

void desimpilha(TipoPilha *pilha){
    if(pilha->topo == 0) return;

    // desempilha
    pilha->topo--;
    TipoCliente *cliente;
    *cliente = pilha->cliente[pilha->topo];
}

void imprimePilha(TipoPilha *pilha){
    for(int i=pilha->topo-1; i>=0; i--){
        printf("Cliente: %d\n", pilha->cliente[i].numero);
        printf("Número da Conta: %d\n", pilha->cliente[i].numeroConta);
        printf("Nome: %s\n\n", pilha->cliente[i].nome);
    }
}