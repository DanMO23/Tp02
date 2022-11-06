#include "./Headers/PBN.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
void constroi_matriz
//gasto total da funcao = melhor caso = 3n + 1. Pior caso = 3n(n-1) + 1

void inicia_matriz
//gasto total da funcao = n^2

void inclui_aresta
//gasto total da funcao = 1

void imprime_matriz
//gasto total da funcao = 0

int atualiza_vetor
//gasto total da funcao = 1

int verifica_sequencia
//gasto total da funcao = pior caso: 3n^2 - n. Melhor caso =  3n - n = 2n

//Obs.: Note que o caso que gera o pior caso para a funcao constroi_matriz tambem é o pior caso para a funcao verifica sequencia.(ver PNB.c)
*/

int main() {
  int k = 0, marca_fim = 0, achou = 0, i, j, z;
  int vetor_binario[N], matriz_adjacente[N][N];
  clock_t t;
  char nome_arquivo[30];
  printf("Escreva o path do arquivo: \n");
  scanf("%s", nome_arquivo);
  t = clock(); //armazena tempo
  inicia_matriz(matriz_adjacente); //************************************* gasto total da funcao = n^2
  constroi_matriz(matriz_adjacente, nome_arquivo); //********************* gasto total da funcao = melhor caso = 3n + 1. Pior caso = 3n(n-1) + 1

  printf("\nNumero de possibilidades: %.0lf\n\n", pow(2, N));

  marca_fim = atualiza_vetor(&k, &vetor_binario[0]); //****************** gasto total da funcao = 1
  
  while (!marca_fim) {
    /*
    Dentro da funcao atualiza vetor há o seguinte if:
      
    if (num > (pow(2, N) - 1)) { // *********** gasto = 1
      printf("\nTodas as possibilidades foram testadas\n");
      return 1;
    }
    Sendo num o valor de da variavel k. Alem disso, essa funcao esta sempre aumentando k em 1. Como k comeca como 1 no while e o parametro de parada do if é num(que é igual a k) ser igual maior a 2^N - 1, o while repetirá 2^N vezes.

    */
    achou = verifica_sequencia(vetor_binario, matriz_adjacente); //gasto total da funcao = pior caso: 3n^2 - n. Melhor caso =  3n - n = 2n

    if (achou) { // **************************************************** gasto 1
      printf("Foi encontrada uma solucao valida\n");
      for (z = 0; z < N; z++) // como nao faz comparacoes, gasto = 0
        printf("%d", vetor_binario[z]);
      printf("\n");
      
      
    }
    marca_fim = atualiza_vetor(&k, &vetor_binario[0]); //gasto total da funcao = 1
  }

  t = clock() - t; //tempo final - tempo inicial
  
  printf("\nPara Entradas = %i\nTempo de execucao: %lfms\n",N, ((double)t)/((CLOCKS_PER_SEC/1000)));
  
  imprime_matriz(matriz_adjacente); //gasto total da funcao = 0
  
  return 0;
}

/*
Conclusoes sobre a complexidade

Melhor caso:
n^2 (inicia_matriz) +
3n + 1 (melhor caso do constroi_matriz) +
1 (atualiza_vetor) +
2^n * (2n(para melhor caso do verifica_sequencia) + 1(if) + 1(atualiza_vetor))(referente a parte do while)

Logo, temos n^2 + 3n + 1 + 1 + 2^n(2n + 1 + 1 ) 
= 2^n(2n + 2 ) + n^2 + 3n + 2

Pior caso:
n^2 (inicia_matriz) +
3n(n-1) + 1 (pior caso do constroi_matriz) +
1 (atualiza_vetor) +
2^n * (3n^2 - n(para pior caso do verifica_sequencia) + 1(if) + 1(atualiza_vetor))(referente a parte do while)

Logo, temos n^2 + 3n(n-1) + 1 + 1 + 2^n(3n^2 - n + 1 + 1 )
= 2^n(3n^2 - n + 2 ) + n^2 + 3n(n-1) + 2

*/
