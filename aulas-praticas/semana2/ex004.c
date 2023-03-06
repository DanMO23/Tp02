#include <stdio.h>

typedef struct 
{
    char nome[100];
    char dtNasc[10];
    int cpf[11];
}Pessoa;

void preecheDados(Pessoa *pes){
    scanf("%s", pes->nome);
    scanf("%s", pes->dtNasc);
    scanf("%d", &pes->cpf);
}

void imprimiDados(Pessoa *pes){
    printf("%s\n", pes->nome);
    printf("%s\n", pes->dtNasc);
    printf("%d\n", pes->cpf);
}
int main(){
    Pessoa pes;
    preecheDados(&pes);
    imprimiDados(&pes);
}