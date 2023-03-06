//CRIANDO UM ARQUIVO DE TEXTO USANDO O FPUTC
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    char letra;
    file = fopen("teste.txt", "w");
    if(file){
        scanf("%c", &letra);
        while(letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
    }
}