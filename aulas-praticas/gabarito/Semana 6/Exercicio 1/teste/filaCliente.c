#include "filaCliente.h"

void filaVazia(Fila* fila){
    fila->frent = (Apontadorfila) malloc(sizeof(tCelula)); //Criando uma fila com celula cabeça com inserção sempre no final
    fila->ult = fila->frent; //Como é com celula cabeça, quando inicia o ultimo aponta para o primeiro
    fila->frent->proximo = NULL; //O primeiro vai apontando para os proximos
    fila->tamanho = 0;
}

void enfileira(Fila* fila, TipoCliente* cliente){
    Apontadorfila novo;
    novo = (Apontadorfila) malloc(sizeof(tCelula));
    if(novo){
        fila->ult->proximo = novo; //Inserção sempre no final
        fila->ult = novo;
        novo->cliente = *cliente;
        novo->proximo = NULL; //Como ele é o ultimo da fila ele aponta para nulo
        fila->tamanho++;
    }
}

void desinfileira(Fila* fila){
    Apontadorfila aux;
    aux = fila->frent;
    fila->frent = fila->frent->proximo; //Sempre vai ser desinfileirado o elemento da frente na fila, então basta fazer o da frente apontar para o proximo e eliminar ele
    free(aux);
    fila->tamanho--;
}

void imprimeFila(Fila* fila){
    Apontadorfila aux;
    aux = fila->frent->proximo;
    while(aux){
        printf("Cliente: %d\n", aux->cliente.numero);
        printf("Numero da Conta: %d\n", aux->cliente.numeroConta);
        printf("Nome: %s\n\n", aux->cliente.nome);
        aux = aux->proximo;
    }
}