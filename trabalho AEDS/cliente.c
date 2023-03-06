#include "cliente.h"

void listaVazia(Tlista *lista){
    lista->primeiro = (Apontador) malloc(sizeof(Tcelula));
    lista->ultimo = lista->primeiro;
    lista->primeiro->proximo = NULL;
}
