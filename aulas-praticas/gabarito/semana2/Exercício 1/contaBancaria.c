#include "contaBancaria.h"

// Operações de Set
void setNumeroConta(tadContaBancaria *conta, int numeroConta){
    conta->numeroConta = numeroConta;
}

void setNome(tadContaBancaria *conta, char *nome){
    strcpy(conta->nome, nome);
}

void setCPF(tadContaBancaria *conta, char *cpf){
    strcpy(conta->cpf, cpf);
}

void setTipo(tadContaBancaria *conta, char *tipo){
    strcpy(conta->tipo, tipo);
}

void setAnoAbertura(tadContaBancaria *conta, int ano){
    conta->anoAbertura = ano;
}

void setSaldo(tadContaBancaria *conta){
    conta->saldo = 0;
}

// Operações de Alteração de Saldo
void saque(tadContaBancaria *conta, float valor){
    conta->saldo = conta->saldo - valor;
    printf("\nNovo Saldo da Conta: %.2f\n", conta->saldo);
}

void deposito(tadContaBancaria *conta, float valor){
    conta->saldo = conta->saldo + valor;
    printf("\nNovo Saldo da Conta: %.2f\n", conta->saldo);
}

// Operações de Get
int getNumeroConta(tadContaBancaria *conta){
    return conta->numeroConta;
}

char *getNome(tadContaBancaria *conta){
    return conta->nome;
}

char *getCPF(tadContaBancaria *conta){
    return conta->cpf;
}

char* getTipo(tadContaBancaria *conta){
    return conta->tipo;
}

int getAnoAbertura(tadContaBancaria *conta){
    return conta->anoAbertura;
}

// Operação de Obtenção de Crédito de Empréstimo
int obterCreditoEmprestimo(tadContaBancaria *conta){
    int anoAtual = 2022;

    if(anoAtual - getAnoAbertura(conta) > 5) return 1;
    else return 0;
}

// Imprimindo Dados do Cliente
void imprimeCliente(tadContaBancaria *conta){
    printf("\n---------------------------\n");
    printf("Nome: %s\n", getNome(conta));
    printf("CPF: %s\n", getCPF(conta));
    printf("Tipo da Conta: %s\n", getTipo(conta));
    printf("Ano de Abertura: %d\n", getAnoAbertura(conta));
    printf("Número da Conta: %d\n", getNumeroConta(conta));
    printf("---------------------------\n");
}