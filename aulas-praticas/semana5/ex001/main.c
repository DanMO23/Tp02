#include "ContaBancaria.h"
//
int main(){
    char *rua = "Rua Paraiba";
    char *bairro = "Sao Jose";
    char *cidade = "Belo Horizonte";
    char *estado = "Minas Gerais";
    int numeroConta, numeroCasa = 15;
    char *nome = "Alvaro Gomes";
    char *cpf = "123456789-01";
    char *dataNasc = "09/07/2001";
    int anoConta = 2020;
    char *tipoConta = "Corrente";
    srand(time(NULL));
    numeroConta = rand() % 1000000;
    ContaBancaria *conta;
    conta = (ContaBancaria *) malloc(5*sizeof(ContaBancaria));
    for(i=0;i<5;i++)
    insereDadosConta(&conta, numeroConta, anoConta, tipoConta, nome, cpf, dataNasc, rua, bairro, cidade, estado, numeroCasa);
    deposito(&conta, 100000);
    saque(&conta, 11111);
    imprimiConta(&conta);
}