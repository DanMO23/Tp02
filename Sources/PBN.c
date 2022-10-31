#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../Headers/PBN.h"


void constroi_matriz(int matriz[N][N], char *nome_arquivo) {

  FILE *arq;
  int linha = 0;
  int cont = 0;
  char sep;
  char valor_lido[3];

  arq = fopen(nome_arquivo, "r");

  if (arq == NULL) {
    printf("Erro na abertura do arquivo\n");
    exit(1);
  }

  while (fscanf(arq, "%s", valor_lido) != EOF) {
    
      printf("\ncaractere lido: |%s| na linha: %i\n ", valor_lido, linha);
  
    inclui_aresta(linha, valor_lido, matriz);

    sep = fgetc(arq);

    if (sep == '\n') {
      linha++;
    }
    if (sep == EOF) {
      break;
    }
  }
}

void inicia_matriz(int matriz[N][N]) {
  int i, j;

  for (i = 0; i < N; i++) {

    for (j = 0; j < N; j++) {
      if (i == j) {
        matriz[i][j] = -1;
      } else {
        matriz[i][j] = 0;
      }
    }
  }
}

void inclui_aresta(int linha, char *valor_lido, int matriz[N][N]) {
  int coluna;
  coluna = atoi(valor_lido);
  if (linha != coluna) {
    matriz[linha][coluna] = 1;
  }
}

void imprime_matriz(int matriz[N][N]) {
  int i, j;
  printf("\n=-=-=-=-=-=-=-=-=-=-=-\nOrganizacao da "
             "matriz:\n=-=-=-=-=-=-=-=-=-=-=\n\n");
  for (i = 0; i < N; i++) {

    for (j = 0; j < N; j++) {

      printf("%2i ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("________________________________\n");
}

int atualiza_vetor(int *k, int *vetor) {
  // contadores
  int i;
  int num = *(k);

  // avalia tamanho do binario
  if (num > (pow(2, N) - 1)) {
    
    printf("Possibilidade binaria maior que a suportada pelo vetor(todas as "
           "possibilidades foram testadas)\n");
    return 1;
  }

  // inicia vetor vazio(decimal = 0)
  for (i = 0; i < N; i++) {
    *(vetor + i) = 0;
    // printf("%d",vetor[i]);
  }

  // valor atual de k:
  // printf("Valor atual de k: %d\n",num);

  i = 0;
  while (num > 0) {
    // obtém o resto da divisão de num por 2
    vetor[N - i - 1] = num % 2;
    i++;
    num = num / 2;
  }

  // vetor preenchido em binario

  /*
printf("Vetor preenchido em binario\n");
for (i = 0; i<N; i++){
  printf("%d",vetor[i]);
}
printf("\n\n");
  */

  // atualiza o valor k para a proxima repetiçao (para o vetor ser preenchido
  // corretamente)
  *(k) += 1;
  return 0;
}

int verifica_sequencia(int vetor_binario[N], int matriz_adjacente[N][N]) {
  int i, j, z;
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      if (i != j) {
        if (matriz_adjacente[i][j] ==
            1) { // Procura dentro da matriz quais elementos são adjacentes
          if (vetor_binario[i] ==
              vetor_binario[j]) { // Compara de acordo com a matriz se as cores
                                  // são iguais em lados adjacentes
            /*
            printf("Posicao i = %d e j = %d:\n", i, j);
            for (z = 0; z < N; z++)
              printf("%d", vetor_binario[z]);
            printf("\n");
            printf("A permutacao acima falha\n\n");
            */
            return 0;
          }
        }
      }
    }
  }
  return 1;
}
