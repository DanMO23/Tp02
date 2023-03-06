#include "pilhaCliente.h"

// Estrutura da Célula da Fila
typedef struct celula *TipoApontador;
typedef struct celula{
    TipoCliente cliente;
    TipoApontador proximo;
} TipoCelula;

// Estrutura da Fila
typedef struct fila{
    TipoApontador frente, tras;
} TipoFila;

// Operações da Fila
void filaVazia(TipoFila *fila);
void enfileira(TipoFila *fila, TipoCliente *cliente);
void desinfileira(TipoFila *fila);
void imprimeFila(TipoFila *fila);