#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct 
{
    char rua[50];
    char bairro[50];
    char cidade[50];
    char estado[50];
    int numeroCasa;
}Endereco;

void insereEndereco(Endereco *endereco, char *rua, char *bairro, char *cidade, char *estado, int numeroCasa);

void setRua(Endereco *endereco, char *rua);
void setBairro(Endereco *endereco, char *bairro);
void setCidade(Endereco *endereco, char *cidade);
void setEstado(Endereco *endereco, char *estado);
void setNumeroCasa(Endereco *endereco, int numeroCasa);

char *getRua(Endereco *endereco);
char *getBairro(Endereco *endereco);
char *getCidade(Endereco *endereco);
char *getEstado(Endereco *endereco);
int getNumeroCasa(Endereco *endereco);

void imprimiEndereco(Endereco *endereco);
