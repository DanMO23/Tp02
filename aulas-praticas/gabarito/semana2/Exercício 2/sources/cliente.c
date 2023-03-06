#include "../headers/cliente.h"

// Funções de Inserção de Dados do Cliente
void insereCliente(tadCliente *cliente, char *nome, char *cpf, char *data, char *rua, int numero, char *bairro, char *cidade, char *estado){
    // Set de Informações do Cliente
    setNome(cliente, nome);
    setCPF(cliente, cpf);
    setDataNascimento(cliente, data);

    // Set de Informações do Endereço
    insereEndereco(cliente->endereco, rua, numero, bairro, cidade, estado);
}

void setNome(tadCliente *cliente, char *nome){
    strcpy(cliente->nome, nome);
}

void setCPF(tadCliente *cliente, char *cpf){
    strcpy(cliente->cpf, cpf);
}

void setDataNascimento(tadCliente *cliente, char *data){
    strcpy(cliente->dataNascimento, data);
}

// Funções de Retorno de Dados do Cliente
char *getNome(tadCliente *cliente){
    return cliente->nome;
}

char *getCPF(tadCliente *cliente){
    return cliente->cpf;
}

char *getDataNascimento(tadCliente *cliente){
    return cliente->dataNascimento;
}

// Imprimir dados do Cliente
void imprimeDadosCliente(tadCliente *cliente){
    printf("Nome: %s\n", getNome(cliente));
    printf("CPF: %s\n", getCPF(cliente));
    printf("Data de Nascimento: %s\n\n", getDataNascimento(cliente));

    imprimeEndereco(cliente->endereco);
}