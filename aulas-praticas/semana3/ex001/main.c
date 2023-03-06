#include <stdio.h>
#include <stdlib.h>
#include "contaBancaria.h"

void recebeNome(contaBancaria* conta, char *nome){
    printf("\nDIGITE O NOME: ");
    fgets(nome, 100, stdin);
    fflush(stdin);
    setNome(conta, nome);
}
void recebeNumero(contaBancaria* conta, int numero){
    numero = rand()%100000;
    setNumero(conta, numero);
}
void recebeCPF(contaBancaria* conta, char *cpf){
    printf("\nDIGITE O CPF: ");
    scanf("%s", cpf);
    fflush(stdin);
    setCPF(conta, cpf);
}
void recebeTipoConta(contaBancaria* conta, char tipoConta){
    printf("\nDIGITE O TIPO DA CONTA: ");
    fflush(stdin);
    scanf("%c", &tipoConta);
    fflush(stdin);
    setTipoConta(conta, tipoConta);
}
void recebeAnoConta(contaBancaria* conta, int anoConta){
    printf("\nDIGITE O ANO DA CONTA: ");
    scanf("%d", &anoConta);
    fflush(stdin);
    setAnoConta(conta, anoConta);
}
void recebeNovoSaldo(contaBancaria* conta){
    setSaldo(conta);
}
void recebeDeposito(contaBancaria* conta, double valor){
    printf("\nVALOR DO DEPOSITO: ");
    scanf("%lf", &valor);
    fflush(stdin);
    deposito(conta, valor);
}
void recebeSaque(contaBancaria* conta, double valor){

    printf("\nVALOR DO SAQUE: ");
    scanf("%lf", &valor);
    fflush(stdin);
    saque(conta, valor);
}
int main()
{
    int numero, anoConta;
    char nome[100], cpf[11], tipoConta;
    double saldo, valor;
    contaBancaria conta;
    recebeNumero(&conta, numero);
    recebeNome(&conta, nome);
    recebeCPF(&conta, cpf);
    recebeTipoConta(&conta, tipoConta);
    recebeAnoConta(&conta, anoConta);
    recebeNovoSaldo(&conta);

    recebeDeposito(&conta, valor);
    recebeSaque(&conta, valor);

    if(emprestimo(&conta)==1)
        printf("\nPARABENS! ESTA APTO A ADQUIRIR UM EMPRESTIMO\n");
    else
        printf("\nINFELIZMENTE, NO MOMENTO NAO ESTA APTO PARA UM EMPRESTIMO\n");
    imprimi(&conta);
    return 0;
}