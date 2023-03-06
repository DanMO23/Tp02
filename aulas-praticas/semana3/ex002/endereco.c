#include "Endereco.h"

void insereEndereco(Endereco *endereco, char *rua, char *bairro, char *cidade, char *estado, int numeroCasa){
    setRua(endereco, rua);
    setBairro(endereco, bairro);
    setCidade(endereco, cidade);
    setEstado(endereco, estado);
    setNumeroCasa(endereco, numeroCasa);
}

void setRua(Endereco *endereco, char *rua){
    strcpy(endereco->rua, rua);
}
void setBairro(Endereco *endereco, char *bairro){
    strcpy(endereco->bairro, bairro);
}
void setCidade(Endereco *endereco, char *cidade){
    strcpy(endereco->cidade, cidade);
}
void setEstado(Endereco *endereco, char *estado){
    strcpy(endereco->estado, estado);
}
void setNumeroCasa(Endereco *endereco, int numeroCasa){
    endereco->numeroCasa = numeroCasa;
}

char *getRua(Endereco *endereco){
    return endereco->rua;
}
char *getBairro(Endereco *endereco){
    return endereco->bairro;
}
char *getCidade(Endereco *endereco){
    return endereco->cidade;
}
char *getEstado(Endereco *endereco){
    return endereco->estado;
}
int getNumeroCasa(Endereco *endereco){
    return endereco->numeroCasa;
}

void imprimiEndereco(Endereco *endereco){
    printf("\nRua: %s", getRua(endereco));
    printf("\nBairro: %s", getBairro(endereco));
    printf("\nCidade: %s", getCidade(endereco));
    printf("\nEstado: %s", getEstado(endereco));
    printf("\nNumero da Casa: %02d", getNumeroCasa(endereco));
}