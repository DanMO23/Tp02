#include "../headers/endereco.h"

typedef struct cliente{
    char nome[100];
    char cpf[20];
    char dataNascimento[20];
    tadEndereco *endereco;
} tadCliente;

// Funções de Inserção de Dados do Cliente
void insereCliente(tadCliente *cliente, char *nome, char *cpf, char *data, char *rua, int numero, char *bairro, char *cidade, char *estado);
void setNome(tadCliente *cliente, char *nome);
void setCPF(tadCliente *cliente, char *cpf);
void setDataNascimento(tadCliente *cliente, char *data);

// Funções de Retorno de Dados do Cliente
char *getNome(tadCliente *cliente);
char *getCPF(tadCliente *cliente);
char *getDataNascimento(tadCliente *clinete);

// Imprimir dados do Cliente
void imprimeDadosCliente(tadCliente *cliente);