#include "../headers/contaBancaria.h"

// Funções de Inserção de Dados da Conta
void insereContaBancaria(tadContaBancaria *conta, int numeroConta, int anoAbertura, char *nome, char *cpf, char *data, char *rua, int numero, char *bairro, char *cidade, char *estado){
    // Set Informações da Conta
    setNumeroConta(conta, numeroConta);
    setSaldo(conta);
    setAnoAbertura(conta, anoAbertura);

    // Set Informações do Cliente
    insereCliente(conta->cliente, nome, cpf, data, rua, numero, bairro, cidade, estado);
}

void setNumeroConta(tadContaBancaria *conta, int numero){
    conta->numero = numero;
}

void setSaldo(tadContaBancaria *conta){
    conta->saldo = 0;
}

void setAnoAbertura(tadContaBancaria *conta, int ano){
    conta->anoAbertura = ano;
}

// Funções de Retorno de Dados da Conta
int getNumeroConta(tadContaBancaria *conta){
    return conta->numero;
}

float getSaldo(tadContaBancaria *conta){
    return conta->saldo;
}

int getAnoAbertura(tadContaBancaria *conta){
    return conta->anoAbertura;
}

// Operações Feitas na Conta Bancária
void saque(tadContaBancaria *conta, float valor){
    conta->saldo = conta->saldo - valor;
    printf("Saldo Atualizado!\n\n");
}

void deposito(tadContaBancaria *conta, float valor){
    conta->saldo = conta->saldo + valor;
    printf("Saldo Atualizado!\n\n");
}

// Imprimir Dados da Conta
void imprimeConta(tadContaBancaria *conta){
    printf("Número da Conta: %d\n", getNumeroConta(conta));
    printf("Saldo: %.2f\n", getSaldo(conta));
    printf("Ano de Abertura: %d\n\n", getAnoAbertura(conta));

    imprimeDadosCliente(conta->cliente);
}