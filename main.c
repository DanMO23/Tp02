#include "./Headers/PBN.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int main() {
  int k = 0, marca_fim = 0, achou = 0, i, j, z;
  int vetor_binario[N], matriz_adjacente[N][N];
  clock_t t;
  char nome_arquivo[30];
  printf("Escreva o path do arquivo: \n");
  scanf("%s", nome_arquivo);
  t = clock(); //armazena tempo
  inicia_matriz(matriz_adjacente);
  constroi_matriz(matriz_adjacente, nome_arquivo);

  printf("\nNumero de possibilidades: %.0lf\n\n", pow(2, N));

  marca_fim = atualiza_vetor(&k, &vetor_binario[0]);
  while (!marca_fim) {
    achou = verifica_sequencia(vetor_binario, matriz_adjacente);
    if (achou) {
      printf("Foi encontrada uma solucao valida\n");
      for (z = 0; z < N; z++)
        printf("%d", vetor_binario[z]);
      printf("\n");
      
      
      
    }
    marca_fim = atualiza_vetor(&k, &vetor_binario[0]);
  }

  t = clock() - t; //tempo final - tempo inicial
  
  printf("\nPara Entradas = %i\nTempo de execucao: %lfms\n",N, ((double)t)/((CLOCKS_PER_SEC/1000)));
  
  imprime_matriz(matriz_adjacente);
  
  return 0;
}
