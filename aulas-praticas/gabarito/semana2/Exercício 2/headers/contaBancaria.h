#include "../headers/cliente.h"

typedef struct contaBancaria{
    int numero;
    float saldo;
    int anoAbertura;
    tadCliente *cliente;
} tadContaBancaria;

// Funções de Inserção de Dados da Conta
void insereContaBancaria(tadContaBancaria *conta, int numeroConta, int anoAbertura, char *nome, char *cpf, char *data, char *rua, int numero, char *bairro, char *cidade, char *estado);
void setNumeroConta(tadContaBancaria *conta, int numero);
void setSaldo(tadContaBancaria *conta);
void setAnoAbertura(tadContaBancaria *conta, int ano);

// Funções de Retorno de Dados da Conta
int getNumeroConta(tadContaBancaria *conta);
float getSaldo(tadContaBancaria *conta);
int getAnoAbertura(tadContaBancaria *conta);

// Operações Feitas na Conta Bancária
void saque(tadContaBancaria *conta, float valor);
void deposito(tadContaBancaria *conta, float valor);

// Imprimir Dados da Conta
void imprimeConta(tadContaBancaria *conta);