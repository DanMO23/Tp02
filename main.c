#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define N 10 //valor de N

int atualiza_vetor(int* k, int* vetor){
    //contadores
    int i;
    int num = *(k);
    
    //avalia tamanho do binario
    if (num > (pow(2,N)-1)){
        printf("Possibilidade binaria maior que a suportada pelo vetor(todas as possibilidades foram testadas)\n");
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

	/*
    printf("Vetor preenchido em binario\n");
    for (i = 0; i<N; i++){
        printf("%d",vetor[i]);
    }
    printf("\n\n");
	*/

    //atualiza o valor k para a proxima repetiçao (para o vetor ser preenchido corretamente)
    *(k)+=1;
    return 0;
}

int verifica_sequencia(int vetor_binario[N], int matriz_adjacente[N][N]){
    int i, j, z;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i!=j){
                if(matriz_adjacente[i][j] == 1){ //Procura dentro da matriz quais elementos são adjacentes
                    if(vetor_binario[i] == vetor_binario[j]){//Compara de acordo com a matriz se as cores são iguais em lados adjacentes
                        printf("Posicao i = %d e j = %d:\n", i, j);
                        for(z=0;z<N;z++)
                            printf("%d", vetor_binario[z]);
						printf("\n");
						printf("A permutacao acima falha\n\n");
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

int main(){
    int k = 0,marca_fim = 0, achou = 0, i, j, z;
    int vetor_binario[N], matriz_adjacente[N][N];
    
    for (i=0;i<N;i++){
        for(j=0;j<N;j++){
			printf("numero matriz %d%d: ",i,j);
            scanf("%d", &matriz_adjacente[i][j]);
        }
    }

    printf("\nNumero de possibilidades: %lf\n\n",pow(2,N));

    marca_fim = atualiza_vetor(&k,&vetor_binario[0]);
    while(!marca_fim){
        achou = verifica_sequencia(vetor_binario, matriz_adjacente);
		if (achou){
			printf("Foi encontrada uma solucao valida\n");
			for(z=0;z<N;z++)
                printf("%d", vetor_binario[z]);
			printf("\n");
			
			printf("\n=-=-=-=-=-=-=-=-=-=-=-\nOrganizacao da matriz:\n=-=-=-=-=-=-=-=-=-=-=\n\n");
			for (i=0;i<N;i++){
				for(j=0;j<N;j++)
					printf("%2d ", matriz_adjacente[i][j]);
				printf("\n");
    		}
			exit(0);
		}
        marca_fim = atualiza_vetor(&k,&vetor_binario[0]);
    } 

	printf("\n=-=-=-=-=-=-=-=-=-=-=-\nOrganizacao da matriz:\n=-=-=-=-=-=-=-=-=-=-=\n\n");
    for (i=0;i<N;i++){
        for(j=0;j<N;j++)
            printf("%2d ", matriz_adjacente[i][j]);
        printf("\n");
    }
	printf("Nao ha solucao\n\n");
  return 0;
}
