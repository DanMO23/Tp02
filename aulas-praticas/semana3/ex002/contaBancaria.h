#include "Cliente.h"

typedef struct 
{
    int numeroConta;
    int anoConta;
    char tipoConta[20];
    double saldo;
    Cliente cliente;
}ContaBancaria;

void insereDadosConta(ContaBancaria *conta, int numeroConta, int anoConta, char *tipoConta, char *nome, char *cpf, char *dataNasc, char *rua, char *bairro, char *cidade, char *estado, int numeroCasa);

void setNumeroConta(ContaBancaria *conta, int numeroConta);
void setAnoConta(ContaBancaria *conta, int anoConta);
void setTipoConta(ContaBancaria *conta, char *tipoConta);
void setInicioSaldo(ContaBancaria *conta);

void deposito(ContaBancaria *conta, double valor);
void saque(ContaBancaria *conta, double valor);

int getNumeroConta(ContaBancaria *conta);
int getAnoConta(ContaBancaria *conta);
char *getTipoConta(ContaBancaria *conta);
double getSaldo(ContaBancaria *conta);

void imprimiConta(ContaBancaria *conta);
