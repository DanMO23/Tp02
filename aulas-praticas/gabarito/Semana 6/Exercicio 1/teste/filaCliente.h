#include "pilhaCliente.h"

typedef struct Celula* Apontadorfila;
typedef struct Celula
{
    TipoCliente cliente;
    Apontadorfila proximo;
}tCelulafila;

typedef struct
{
    Apontadorfila frent, ult;
    int tamanho;
}Fila;  

void filaVazia(Fila *fila);
void enfileira(Fila *fila, TipoCliente *cliente);
void desinfileira(Fila *fila);
void imprimeFila(Fila *fila);


