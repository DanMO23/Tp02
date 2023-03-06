#include "contaBancaria.h"

int main(){
    int numeroConta, anoAbertura;
    char nome[100], cpf[12], tipo[10];
    tadContaBancaria conta;

    // Inserindo Valores pelo Usuário
    printf("Digite seu Nome: ");
    scanf("%s", nome);

    printf("Digite seu CPF: ");
    scanf("%s", cpf);

    printf("Digite o Tipo da Conta: ");
    scanf("%s", tipo);

    anoAbertura = 2010;
    numeroConta = (rand()%100);

    // Adicionando Valores ao TAD
    setNumeroConta(&conta, numeroConta);
    setNome(&conta, nome);
    setCPF(&conta, cpf);
    setTipo(&conta, tipo);
    setAnoAbertura(&conta, anoAbertura);
    setSaldo(&conta);

    // Adicionando Saldo
    deposito(&conta, 200);

    // Retirando Saldo
    saque(&conta, 50);

    // Verificando se tem Crédito para Emprestimo
    if(obterCreditoEmprestimo(&conta) == 1) printf("\nPode Obter Credito de Emprestimo!\n");
    else printf("\nNao Pode Obter Credito de Emprestimo!\n");

    // Imprimindo Dados da Conta
    imprimeCliente(&conta);
    return 0;
}