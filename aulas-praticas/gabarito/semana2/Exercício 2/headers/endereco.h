#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct endereco{
    char rua[50];
    int numero;
    char bairro[50];
    char cidade[50];
    char estado[50];
} tadEndereco;

// Funções de Inserção de Dados do Endereço
void insereEndereco(tadEndereco *endereco, char *rua, int numero, char *bairro, char *cidade, char *estado);
void setRua(tadEndereco *endereco, char *rua);
void setNumero(tadEndereco *endereco, int numero);
void setBairro(tadEndereco *endereco, char *bairro);
void setCidade(tadEndereco *endereco, char *cidade);
void setEstado(tadEndereco *endereco, char *estado);

// Funções de Retorno de Dados do Endereço
char *getRua(tadEndereco *endereco);
int getNumero(tadEndereco *endereco);
char *getBairro(tadEndereco *endereco);
char *getCidade(tadEndereco *endereco);
char *getEstado(tadEndereco *endereco);

// Imprimir Dados de Endereço
void imprimeEndereco(tadEndereco *endereco);