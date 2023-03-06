//FUNÇÕES PARA LER E ESCREVER ARQUIVOS

#include <stdio.h>
#include <stdlib.h>

void escrever(char *nome){
    FILE *file = fopen(nome, "w");
    char letra;
    if(file){
        scanf("%c", &letra);
        while(letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
    }
    fclose(file);
}

void ler(char  *nome){
    FILE *file = fopen(nome, "r");
    char letra;
    if(file){
        while(!feof(file)){
            letra = fgetc(file);
            printf("%c", letra);
        }
        fclose(file);
    }
}

int main(){
    char nome[] = "texto.txt";
    escrever(nome);
    ler(nome);

}