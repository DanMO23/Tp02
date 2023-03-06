#include "headers/contaBancaria.h"

int main(){
    // Informações Endereço
    char *rua = "Rua Dois";
    int numeroRua = 10;
    char *bairro = "Aula de Algoritmos e Estruturas de Dados";
    char *cidade = "Florestal";
    char *estado = "Minas Gerais";

    // Informações do Cliente
    char *nome = "Estela Miranda";
    char *cpf = "123.456.789-01";
    char *dataNascimento = "08/11/1999";

    // Informações da Conta
    int numeroConta = rand()%100;
    int anoAbertura = 2022;

    // Operações com a Conta
    tadContaBancaria conta;
    insereContaBancaria(&conta, numeroConta, anoAbertura, nome, cpf, dataNascimento, rua, numeroRua, bairro, cidade, estado);
    deposito(&conta, 100);
    saque(&conta, 10.10);
    imprimeConta(&conta);
}