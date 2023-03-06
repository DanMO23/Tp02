#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contaBancaria{
    int numeroConta;
    char nome[100];
    char cpf[12];
    char tipo[10];
    int anoAbertura;
    float saldo;
} tadContaBancaria;

// Operações de Set
void setNumeroConta(tadContaBancaria *conta, int numeroConta);
void setNome(tadContaBancaria *conta, char *nome);
void setCPF(tadContaBancaria *conta, char *cpf);
void setTipo(tadContaBancaria *conta, char *tipo);
void setAnoAbertura(tadContaBancaria *conta, int ano);
void setSaldo(tadContaBancaria *conta);

// Operações de Alteração de Saldo
void saque(tadContaBancaria *conta, float valor);
void deposito(tadContaBancaria *conta, float valor);

// Operações de Get
int getNumeroConta(tadContaBancaria *conta);
char *getNome(tadContaBancaria *conta);
char *getCPF(tadContaBancaria *conta);
char* getTipo(tadContaBancaria *conta);
int getAnoAbertura(tadContaBancaria *conta);

// Operação de Obtenção de Crédito de Empréstimo
int obterCreditoEmprestimo(tadContaBancaria *conta);

// Imprimindo Dados do Cliente
void imprimeCliente(tadContaBancaria *conta);