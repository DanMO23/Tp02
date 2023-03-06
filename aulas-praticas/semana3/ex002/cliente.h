#include "Endereco.h"

typedef struct 
{
    char nome[100];
    char cpf[20];
    char dataNasc[20];
    Endereco endereco;
}Cliente;

void insereCliente(Cliente *cliente, char *nome, char *cpf, char *dataNasc, char *rua, char *bairro, char *cidade, char *estado, int numeroCasa);

void setNome(Cliente *cliente, char *nome);
void setCPF(Cliente *cliente, char *cpf);
void setDataNasc(Cliente *cliente, char *dataNasc);

char *getNome(Cliente *cliente);
char *getCPF(Cliente *cliente);
char *getDataNasc(Cliente *cliente);

void imprimiCliente(Cliente *cliente);
