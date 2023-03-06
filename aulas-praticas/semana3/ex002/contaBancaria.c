#include "ContaBancaria.h"

void insereDadosConta(ContaBancaria *conta, int numeroConta, int anoConta, char *tipoConta, char *nome, char *cpf, char *dataNasc, char *rua, char *bairro, char *cidade, char *estado, int numeroCasa){
    setNumeroConta(conta, numeroConta);
    setAnoConta(conta, anoConta);
    setTipoConta(conta, tipoConta);
    setInicioSaldo(conta);

    insereCliente(&conta->cliente, nome, cpf, dataNasc, rua, bairro, cidade, estado, numeroCasa);
}

void setNumeroConta(ContaBancaria *conta, int numeroConta){
    conta->numeroConta = numeroConta;
}
void setAnoConta(ContaBancaria *conta, int anoConta){
    conta->anoConta = anoConta;
}
void setTipoConta(ContaBancaria *conta, char *tipoConta){
    strcpy(conta->tipoConta, tipoConta);
}
void setInicioSaldo(ContaBancaria *conta){
    conta->saldo = 0;
}

void deposito(ContaBancaria *conta, double valor){
    conta->saldo += valor;
}
void saque(ContaBancaria *conta, double valor){
    conta->saldo -= valor;
}

int getNumeroConta(ContaBancaria *conta){
    return conta->numeroConta;
}
int getAnoConta(ContaBancaria *conta){
    return conta->anoConta;
}
char *getTipoConta(ContaBancaria *conta){
    return conta->tipoConta;
}
double getSaldo(ContaBancaria *conta){
    return conta->saldo;
}

void imprimiConta(ContaBancaria *conta){
    printf("\nNumero da Conta: %d", getNumeroConta(conta));
    printf("\nAno da Conta: %d", getAnoConta(conta));
    printf("\nTipo da Conta: %s", getTipoConta(conta));
    printf("\nSaldo Disponivel: %.2lf", getSaldo(conta));

    imprimiCliente(&conta->cliente);
}