//FUNÇÃO PARA ESCREVER STRING EM UM ARQUIVO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escrever(char *nome){
    FILE *file = fopen(nome, "w");
    char texto[500];
    if(file){
        printf("DIGITE UMA FRASE OU 1 CARACTER PARA FINALIZAR");
        fgets(texto, 500, stdin);
        while(strlen(texto)>1){
            fputs(texto,file);
            fgets(texto, 500, stdin);
        }
    }
    fclose(file);
}

void ler(char *nome){
    FILE *file = fopen(nome, "r");
    char texto[500];
    if(file){
        printf("TEXTO LIDO DO ARQUIVO\n");
        while(!feof(file)){
            if(fgets(texto,500,file)){
                printf("%s", texto);
            }
        }
        fclose(file);
    }
}

int main(){
    char nome[] = {"texto.txt"};
    escrever(nome);
    ler(nome);
}