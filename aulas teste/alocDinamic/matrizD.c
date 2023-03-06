//Criando uma matriz dinamicamente
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int **mat, i, j;
    int linha, coluna;
    printf("INFORME O NUMERO DE LINHAS E COLUNAS: ");
    scanf("%d %d", &linha, &coluna);
    mat = malloc(linha * sizeof(int*));
    for (i=0;i<linha;i++)
        mat[i] = malloc(coluna * sizeof(int));
    srand(time(NULL));
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++)
            mat[i][j] = rand() % 60;
    }
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++)
            printf("%02d ", mat[i][j]);
        printf("\n");
    }
}