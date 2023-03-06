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

  while (fscanf(arq, "%s", valor_lido) != EOF) { 
  /*
  Observe o seguinte: o melhor caso é quando a linha contem apenas o valor da bolinha. Isso significa que a bolinha nao faz conxoes com ninguem, resultando numa complexidade n.
  Ja o pior caso é quando todas as bolinhas estao conectadas (Algo que tambem resulta no pior caso para a funçao verifica_sequencia). Nesse caso, cada bolinha faz conexoes com n-1 bolinhas. Como o arquivo tem uma linha para cada bolinha, o while repetirá n(n-1) vezes.
    
  */
    inclui_aresta(linha, valor_lido, matriz); // ****** gasto 1

    sep = fgetc(arq);

    if (sep == '\n') { // ***************************** gasto 1
      linha++;
    }
    if (sep == EOF) { //******************************* gasto 1
      break;
    }
  } // gasto total do while = melhor caso = 3n. Pior caso = 3n(n-1)
}
//gasto total da funcao = melhor caso = 3n + 1. Pior caso = 3n(n-1) + 1

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
 
  }

  
  i = 0;
  while (num > 0) { // *************************gasto = como nao ha condicionais dentro do loop, gasto = 0
    // obtém o resto da divisão de num por 2
    vetor[N - i - 1] = num % 2;
    i++;
    num = num / 2;
  }

 

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

    /*
    Perceba o seguinte: o pior caso será quando a linha de execucao executa todos os 3 ifs. 
    Primeiramente: independente da formula de complexidade dessa funcao, podemos garantir que
     todas as linhas terao um caso onde somente o primeiro if é executado. 
    Em segundo lugar: a unica forma de (tirando a excecao mostrada no item anterior) a linha de 
    execucao entrar nos dois ifs é se todo item da matriz_adjacente, 
    com exceçao dos da diagonal principal, for 1. Logo, temos 3*n^2 que representa o pior caso. 
    Subtraindo dos n casos onde i == j, temos 3n^2 - n. 
    Ja o melhor caso é quando todos os itens da matriz sao 0. Logo, temos 3n - n = 2n.
    */

      if (i != j) {  //**********************************gasto 1
        if (matriz_adjacente[i][j] == 
          1) { // Procura dentro da matriz quais elementos são adjacentes
          //**************************************gasto 1
          if (vetor_binario[i] ==
              vetor_binario[j]) { // Compara de acordo com a matriz se as cores
                                  // são iguais em lados adjacentes
           
            return 0;
          }
        }
      }
    }
  }//gasto = melhor caso:  3n - n = 2n. Pior caso: 3n^2 - n
  return 1;
}
//gasto total da funcao = pior caso: 3n^2 - n. Melhor caso =  3n - n = 2n

//Obs.: Note que o caso que gera o pior caso para a funcao constroi_matriz tambem é o pior caso para a funcao verifica sequencia.

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

*/