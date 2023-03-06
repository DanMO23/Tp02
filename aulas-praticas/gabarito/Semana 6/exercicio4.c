#include <stdio.h>

int moda(int *vetor, int tam){
    int moda[tam];

    // preenchendo vetor com zero
    for(int i=0; i<tam; i++) moda[i] = 0;

    // somando as modas do vetor
    for(int i=0; i<tam; i++) moda[vetor[i]] += 1;

    // verificando maior moda
    int maiorModa = moda[0], pos = 0;
    for(int i=0; i<tam; i++)
        if(moda[i] > maiorModa){
            maiorModa = moda[i];
            pos = i;
        }

    // retornando maior moda
    return maiorModa;
}

int main(){
    int vetor[5] = {1, 2, 3, 2, 4};
    int modaVetor = moda(vetor, 5);
    printf("A moda eh: %d\n", modaVetor);
    return 0;
}