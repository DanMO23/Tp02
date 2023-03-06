#include "TMatriz.h"


void InicializarMatriz(TMatriz *tipoM, int fator){

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            tipoM->matriz[i][j] = (i+j) * fator;
        }
    }
}

void SomarMatrizes(TMatriz *tipoM_I, TMatriz *tipoM_II, TMatriz *tipoM_Resultado){ 
    // O algoritmo para soma de matrizes apresenta ordem de complexidade quadrática (f(n) = O(n²)), devido aos laços de repetição aninhados
    for (int i = 0; i < N; i++){ // Executa n vezes
        for (int j = 0; j < N; j++){ // Executa n vezes
            tipoM_Resultado->matriz[i][j] = tipoM_I->matriz[i][j] + tipoM_II->matriz[i][j];
        }
    }
}

void MultiplicarMatrizes(TMatriz *tipoM_I, TMatriz *tipoM_II, TMatriz *tipoM_Resultado){
    // O algoritmo para multiplicação de matrizes apresenta ordem de complexidade quadrática (f(n) = O(n³)),
    // devido há presença de três laços de repetição aninhados
    int resultado;
    for (int i = 0; i < N; i++){ // Executa n vezes
        for (int j = 0; j < N; j++){ // Executa n vezes
            resultado = 0;
            for (int k = 0; k < N; k++){ // Executa n vezes
                resultado += (tipoM_I->matriz[i][k] * tipoM_II->matriz[k][j]);
            }
            tipoM_Resultado->matriz[i][j] = resultado;
        }
    }
}

void ImprimirMatriz(TMatriz *tipoM){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%d ", tipoM->matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}