#include "../headers/endereco.h"

// Funções de Inserção de Dados do Endereço
void insereEndereco(tadEndereco *endereco, char *rua, int numero, char *bairro, char *cidade, char *estado){
    setRua(endereco, rua);
    setNumero(endereco, numero);
    setBairro(endereco, bairro);
    setCidade(endereco, cidade);
    setEstado(endereco, estado);
}

void setRua(tadEndereco *endereco, char *rua){
    strcpy(endereco->rua, rua);
}

void setNumero(tadEndereco *endereco, int numero){
    endereco->numero = numero;
}

void setBairro(tadEndereco *endereco, char *bairro){
    strcpy(endereco->bairro, bairro);
}

void setCidade(tadEndereco *endereco, char *cidade){
    strcpy(endereco->cidade, cidade);
}

void setEstado(tadEndereco *endereco, char *estado){
    strcpy(endereco->estado, estado);
}

// Funções de Retorno de Dados do Endereço
char *getRua(tadEndereco *endereco){
    return endereco->rua;
}

int getNumero(tadEndereco *endereco){
    return endereco->numero;
}

char *getBairro(tadEndereco *endereco){
    return endereco->bairro;
}

char *getCidade(tadEndereco *endereco){
    return endereco->cidade;
}

char *getEstado(tadEndereco *endereco){
    return endereco->estado;
}

// Imprimir Dados de Endereço
void imprimeEndereco(tadEndereco *endereco){
    printf("Rua: %s\n", getRua(endereco));
    printf("Número: %d\n", getNumero(endereco));
    printf("Bairro: %s\n", getBairro(endereco));
    printf("Cidade: %s\n", getCidade(endereco));
    printf("Estado: %s\n\n", getEstado(endereco));
}