#include <stdio.h>
#include <stdlib.h>
#define N 4

typedef struct {
    int matriz[N][N];
} TMatriz;


void InicializarMatriz(TMatriz *tipoM, int fator);

void SomarMatrizes(TMatriz *tipoM_I, TMatriz *tipoM_II, TMatriz *tipoM_Resultado);

void MultiplicarMatrizes(TMatriz *tipoM_I, TMatriz *tipoM_II, TMatriz *tipoM_Resultado);

void ImprimirMatriz(TMatriz *tipoM);