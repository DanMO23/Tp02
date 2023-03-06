#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contaBancaria.h"

void deposito(contaBancaria* conta, double valor){
    conta->saldo += valor;
}
void saque(contaBancaria* conta, double valor){
    conta->saldo -= valor;
}


//FUNÇÕES SET
void setNome(contaBancaria *conta, char *nome)
{
    strcpy(conta->nome, nome);
}
void setNumero(contaBancaria *conta, int numero)
{
    conta->numero = numero;
}
void setCPF(contaBancaria *conta, char *cpf)
{
    strcpy(conta->cpf, cpf);
}
void setTipoConta(contaBancaria *conta, char tipoConta)
{
    conta->tipoConta = tipoConta;
}
void setAnoConta(contaBancaria *conta, int anoConta)
{
    conta->anoConta = anoConta;
}
void setSaldo(contaBancaria *conta)
{
    conta->saldo = 0;
}

//FUNÇÕES GET
char *getNome(contaBancaria *conta)
{
    return conta->nome;
}
char *getCPF(contaBancaria *conta)
{
    return conta->cpf;
}
char getTipoConta(contaBancaria *conta)
{
    return conta->tipoConta;
}
int getNumero(contaBancaria *conta)
{
    return conta->numero;
}
int getAnoConta(contaBancaria *conta)
{
    return conta->anoConta;
}
double getSaldo(contaBancaria *conta)
{
    return conta->saldo;
}

int emprestimo(contaBancaria* conta){
    int anoAtual = 2022;
    if(anoAtual - getAnoConta(conta) > 5)
        return 1;
    else    
        return 0;
}

//IMPRIMI
void imprimi(contaBancaria *conta)
{
    printf("\n-----------------------------\n");
    printf("NOME: %s\n", getNome(conta));
    printf("CPF: %s\n", getCPF(conta));
    printf("TIPO CONTA: %c\n", getTipoConta(conta));
    printf("NUMERO CONTA: %d\n", getNumero(conta));
    printf("ANO CONTA: %d\n", getAnoConta(conta));
    printf("SALDO: %.2lf\n", getSaldo(conta));
    printf("-----------------------------\n");
}