//ESCREVENDO E LENDO NA TELA UM ARQUIVO COM A FUNÇÃO FGETC

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    char letra;
    file = fopen("teste.txt", "w+");
    if(file){
        scanf("%c", &letra);
        while(letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
        rewind(file);
        printf("TEXTO LIDO DO ARQUIVO:\n");
        while(!feof(file)){
            letra = fgetc(file);
            printf("%c", letra);
        }
        fclose(file);
    }
}