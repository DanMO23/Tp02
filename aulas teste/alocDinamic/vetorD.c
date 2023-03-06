//Criando um vetor dinamicamento

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, tam, *vet;
    printf("TAMANHO DO VETOR");
    scanf("%d", &tam);
    srand(time(NULL));
    vet = malloc(tam * sizeof(int));
    if(vet){
        for(i=0;i<tam;i++){
            (vet[i]) = rand() % 61;
        }
        for(i=0;i<tam;i++){
            printf("%02d ", (vet[i]));
        }
    }
}