#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escreve(char *nome){
    FILE *file = fopen(nome, "w");
    char texto[500];
    if(file){
        printf("DIGITE UMA FRASE OU 1 CARACTER PARA FINALIZAR");
        fgets(texto, 500, stdin);
        while(strlen(texto)>1){
            fputs(texto, file);
            fgets(texto, 500, stdin);
        }
    }
    fclose(file);
}

void ler(char *nome){
    FILE *file = fopen(nome, "r");
    char texto[500];
    if(file){
        printf("Dados lidos do arquivo:\n");
        while(fscanf(file, "%s", texto)!=-1)
            printf("%c\n",texto[0]);
    }    
    fclose(file);
}

int main(){
    char nome[] = {"texto.txt"};
    escreve(nome);
    ler(nome);
}