#include "pilhaCliente.h"

void FazPilhaVazia(Pilha* pilha){
    pilha->topo = NULL; //o topo irá apontador para nulo
    pilha->tamanho = 0;
}

int LehPilha(Pilha* pilha){
    return (pilha->topo == NULL);
}

void Empilha(Pilha* pilha, TipoCliente* cliente){
    Apontador novo;
    novo = (Apontador) malloc(sizeof(tCelula)); //Alocando uma celula
    novo->cliente = *cliente;
    novo->proximo = pilha->topo; //A celula alocada irá apontar para a anterior (para baixo)
    pilha->topo = novo; //O topo será a nova celula alocada
    pilha->tamanho++; //Aumenta o tamanho da lista
    return;
}

void Desempilha(Pilha* pilha){ //Desempilhando sem retornar nada
    Apontador aux;
    if(LehPilha(pilha)) //Não tem nada na pilha
        return;
    aux = pilha->topo;
    pilha->topo = aux->proximo; //O topo da pilha será a proxima(de baixo)
    free(aux);
    pilha->tamanho--; //Diminui a pilha
    printf("Desempilhado\n\n");
    return;
}

void insereCliente(TipoCliente* cliente, char* nome, int numero, int numeroConta){
    strcpy(cliente->nome, nome);
    cliente->numero = numero;
    cliente->numeroConta = numeroConta;
}

void imprimePilha(Pilha *pilha){
    Apontador aux;
    aux = pilha->topo;
    while(aux){
        printf("Nome:%s\nNumero:%d\nNumero Conta:%d\n\n", aux->cliente.nome, aux->cliente.numero, aux->cliente.numeroConta);
        aux = aux->proximo;
    }
}