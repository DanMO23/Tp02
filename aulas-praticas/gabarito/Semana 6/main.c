#include "TMatriz.h"

int main(){
    TMatriz m1, m2, m3;

    InicializarMatriz(&m1, 1);
    InicializarMatriz(&m2, 1);
    InicializarMatriz(&m3, 0);

    ImprimirMatriz(&m1);


    SomarMatrizes(&m1, &m2, &m3);
    ImprimirMatriz(&m3);

    InicializarMatriz(&m3, 0);
    MultiplicarMatrizes(&m1, &m2, &m3);
    ImprimirMatriz(&m3);

}