#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3 //valor de N

int atualiza_vetor(int* k, int* vetor){
    //contadores
    int i;
    int num = *(k);
    
    //avalia tamanho do binario
    if (num > (pow(2,N)-1)){
        printf("Possibilidade binaria maior que a suportada pelo vetor\n");
        return 1;
    }

    //inicia vetor vazio(decimal = 0)
    for (i=0;i<N;i++){
        *(vetor + i) = 0;
        //printf("%d",vetor[i]);
    }

    //valor atual de k:
    //printf("Valor atual de k: %d\n",num);

    i = 0;
    while(num > 0)
	{
		// obtém o resto da divisão de num por 2
		vetor[N-i-1] = num % 2;
		i++;
		num = num / 2;
	}

    //vetor preenchido em binario
    printf("Vetor preenchido em binario\n");
    for (i = 0; i<N; i++){
        printf("%d",vetor[i]);
    }
    printf("\n\n");

    //atualiza o valor k para a proxima repetiçao (para o vetor ser preenchido corretamente)
    *(k)+=1;
    return 0;
}

int main(){
  int k = 0,marca_fim=0,i;
  int vetor_binario[N];
  
  printf("Numero de possibilidades: %lf\n\n",pow(2,N));

  while(!marca_fim){
    marca_fim = atualiza_vetor(&k,&vetor_binario[0]);
  }

  return 0;
}
