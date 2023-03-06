#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int numero;
    double saldo;
    char nome[100];
    char cpf[11];
    char tipoConta;
    int anoConta;
} contaBancaria;

void deposito(contaBancaria* conta, double valor);
void saque(contaBancaria* conta, double valor);

void setNome(contaBancaria *conta, char *nome);
void setCPF(contaBancaria *conta, char *cpf);
void setTipoConta(contaBancaria *conta, char tipoConta);
void setNumero(contaBancaria* conta, int numero);
void setAnoConta(contaBancaria* conta, int anoConta);
void setSaldo(contaBancaria* conta);

char *getNome(contaBancaria *conta);
char *getCPF(contaBancaria *conta);
char getTipoConta(contaBancaria *conta);
int getNumero(contaBancaria *conta);
int getAnoConta(contaBancaria *conta);
double getSaldo(contaBancaria *conta);

int emprestimo(contaBancaria *conta);

void imprimi(contaBancaria *conta);