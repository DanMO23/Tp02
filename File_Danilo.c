#include <stdio.h>
#include <stdlib.h>
#define MAX_ENTRADAS 10

void inicia_matriz(int matriz[MAX_ENTRADAS][MAX_ENTRADAS]);

void inclui_aresta(int linha, char *valor_lido,
                   int matriz[MAX_ENTRADAS][MAX_ENTRADAS]);

void imprime_matriz(int matriz[MAX_ENTRADAS][MAX_ENTRADAS]);

void constroi_matriz(int matriz[MAX_ENTRADAS][MAX_ENTRADAS],
                     char *nome_arquivo);

int main() {

  int matriz_adj[MAX_ENTRADAS][MAX_ENTRADAS];
  
  char nome_arquivo[30];
  

  printf("Escreva o path do arquivo: \n");
  scanf("%s", nome_arquivo);

  // Zera matriz

  inicia_matriz(matriz_adj);

  imprime_matriz(matriz_adj);

  constroi_matriz(matriz_adj, nome_arquivo);

  imprime_matriz(matriz_adj);

  return 0;
}

void constroi_matriz(int matriz[MAX_ENTRADAS][MAX_ENTRADAS],
                    char *nome_arquivo) {

  FILE *arq;
  int linha=0;
  int cont = 0;
  char sep;
  char valor_lido[3];
  
  arq = fopen(nome_arquivo, "r");

  if (arq == NULL) {
    printf("Erro na abertura do arquivo\n");
    exit(1);
  }

  while (fscanf(arq, "%s", valor_lido) != EOF) {

    printf("\ncaractere lido: %s |na linha: %i\n ", valor_lido, linha);

    if (cont > 0) {
      inclui_aresta(linha, valor_lido, matriz);
    }

    sep = fgetc(arq);

    if (sep == '\n') {
      linha++;
      cont = 0;
    }
    if (sep == EOF) {
      break;
    }

    cont++;
  }
}

void inicia_matriz(int matriz[MAX_ENTRADAS][MAX_ENTRADAS]) {
  int i, j;

  for (i = 0; i < MAX_ENTRADAS; i++) {

    for (j = 0; j < MAX_ENTRADAS; j++) {
      if (i == j) {
        matriz[i][j] = -1;
      } else {
        matriz[i][j] = 0;
      }
    }
  }
}

void inclui_aresta(int linha, char *valor_lido,
                   int matriz[MAX_ENTRADAS][MAX_ENTRADAS]) {
  int coluna;
  coluna = atoi(valor_lido);
  matriz[linha][coluna] = 1;
}

void imprime_matriz(int matriz[MAX_ENTRADAS][MAX_ENTRADAS]) {
  int i, j;
  printf("Matriz: \n");
  for (i = 0; i < MAX_ENTRADAS; i++) {

    for (j = 0; j < MAX_ENTRADAS; j++) {

      printf("%2i ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("________________________________\n");
}