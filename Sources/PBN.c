#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "../Headers/PBN.h"


void constroi_matriz(int matriz[N][N], char *nome_arquivo) {

  FILE *arq;
  int linha = 0;
  int cont = 0;
  char sep;
  char valor_lido[3];
  
  arq = fopen(nome_arquivo, "r");

  if (arq == NULL) { //********************************** gasto computacional = 1
    printf("Erro na abertura do arquivo\n");
    exit(1);
  }

  while (fscanf(arq, "%s", valor_lido) != EOF) { //***** entre n e n^2. Como não há como saber a combinação da entrada, considerarei um caso onde todas as bolinhas fazem contato com duas bolinha, ou seja, cada linha terá tres dados e consequentemente o while será executado 3n vezes
    
  
    inclui_aresta(linha, valor_lido, matriz); // ****** gasto 1

    sep = fgetc(arq);

    if (sep == '\n') { // ***************************** gasto 1
      linha++;
    }
    if (sep == EOF) { //******************************* gasto 1
      break;
    }
  } // gasto total do while = 3*(3n) = 9n
}
//gasto total da funcao = 9n + 1

void inicia_matriz(int matriz[N][N]) {
  int i, j;

  for (i = 0; i < N; i++) { // n repeticoes

    for (j = 0; j < N; j++) { // n repeticoes
      if (i == j) { //************** gasto = como é um if e um else, o gasto é 1
        matriz[i][j] = -1;
      } else {
        matriz[i][j] = 0;
      }
    }//gasto total do for = n
  }//gasto total do for = n^2
}
//gasto total da funcao = n^2

void inclui_aresta(int linha, char *valor_lido, int matriz[N][N]) {
  int coluna;
  coluna = atoi(valor_lido);
  if (linha != coluna) { // *************************** gasto = 1
    matriz[linha][coluna] = 1;
  }
} 
//gasto total da funcao = 1

void imprime_matriz(int matriz[N][N]) {
  //como nao há ifs em nenhum dos dois fors e o if dentro do for é desconsiderado
  int i, j;
  printf("\n=-=-=-=-=-=-=-=-=-=-=-\nOrganizacao da "
             "matriz:\n=-=-=-=-=-=-=-=-=-=-=\n\n");
  for (i = 0; i < N; i++) { //repete n vezes

    for (j = 0; j < N; j++) { //repete n vezes

      printf("%2i ", matriz[i][j]);
    } 
    printf("\n");
  }
  printf("________________________________\n");
}
//gasto total da funcao = 0

int atualiza_vetor(int *k, int *vetor) {
  // contadores
  int i;
  int num = *(k);

  // avalia tamanho do binario
  if (num > (pow(2, N)-1)) { // *********** gasto = 1
    
    printf("\nTodas as possibilidades foram testadas\n");
    return 1;
  }

  // inicia vetor vazio(decimal = 0)
  for (i = 0; i < N; i++) { // *************** como nao ha ifs dentro do for, nao ha gasto
    *(vetor + i) = 0;
    // printf("%d",vetor[i]);
  }

  // valor atual de k:
  // printf("Valor atual de k: %d\n",num);

  i = 0;
  while (num > 0) { // *************************gasto = como nao ha condicionais dentro do loop, gasto = 0
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
//gasto total da funcao = 1

int verifica_sequencia(int vetor_binario[N], int matriz_adjacente[N][N]) {
  int i, j, z;
  for (i = 0; i < N; i++) { //repete n vezes
    for (j = 0; j < N; j++) { //repete n vezes
      if (i != j) {  //**********************************gasto 1
        if (matriz_adjacente[i][j] == 
          1) { // Procura dentro da matriz quais elementos são adjacentes
          //**************************************gasto 1
          if (vetor_binario[i] ==
              vetor_binario[j]) { // Compara de acordo com a matriz se as cores
                                  // são iguais em lados adjacentes
            /*
            //*************************************gasto 1
            printf("Posicao i = %d e j = %d:\n", i, j);
            for (z = 0; z < N; z++)
              printf("%d", vetor_binario[z]);
            printf("\n");
            printf("A permutacao acima falha\n\n");
            */
            return 0;
          }
        }
      }// o melhor caso é onde sai do if de primeira, e o pior é quando entra nos dois 3 ifs, resultando gasto 3
    }// gasto = melhor caso: n. Pior caso: 3n
  }//gasto = melhor caso: n*(n) = n^2. Pior caso: n*(3n) = 3n^2
  return 1;
}
//gasto total da funcao = pior caso: 3n^2 . Melhor caso = 3n



/*
void constroi_matriz
//gasto total da funcao = 9n + 1

void inicia_matriz
//gasto total da funcao = n^2

void inclui_aresta
//gasto total da funcao = 1

void imprime_matriz
//gasto total da funcao = 0

int atualiza_vetor
//gasto total da funcao = 1

int verifica_sequencia
//gasto total da funcao = pior caso: 3n^2 . Melhor caso = 3n

*/