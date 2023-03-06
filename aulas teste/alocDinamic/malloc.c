// FUNÇÕES MALLOC

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x;
    x = malloc(sizeof(int));
    if(x){
        printf("%d\n", *x);
        *x = 50;
        printf("%d\n", *x);
    }
}