#include "Cliente.h"

void insereCliente(Cliente *cliente, char *nome, char *cpf, char *dataNasc, char *rua, char *bairro, char *cidade, char *estado, int numeroCasa){
    setNome(cliente, nome);
    setCPF(cliente, cpf);
    setDataNasc(cliente, dataNasc);

    insereEndereco(&cliente->endereco, rua, bairro, cidade, estado, numeroCasa);
}

void setNome(Cliente *cliente, char *nome){
    strcpy(cliente->nome, nome);
}
void setCPF(Cliente *cliente, char *cpf){
    strcpy(cliente->cpf, cpf);
}
void setDataNasc(Cliente *cliente, char *dataNasc){
    strcpy(cliente->dataNasc, dataNasc);
}

char *getNome(Cliente *cliente){
    return cliente->nome;
}
char *getCPF(Cliente *cliente){
    return cliente->cpf;
}
char *getDataNasc(Cliente *cliente){
    return cliente->dataNasc;
}

void imprimiCliente(Cliente *cliente){
    printf("\nNome: %s", getNome(cliente));
    printf("\nCPF: %s", getCPF(cliente));
    printf("\nData de Nascimento: %s", getDataNasc(cliente));

    imprimiEndereco(&cliente->endereco);
}