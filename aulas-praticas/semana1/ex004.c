#include <stdio.h>
int soma(int num1, int num2){
    return num1 + num2;
}
int subtracao(int num1, int num2){
    return num1 - num2;
}
int multiplicacao(int num1, int num2){
    return num1 * num2;
}
int divisao(int num1, int num2){
    return num1 / num2;
}

int main(){
    char op;
    int num1, num2;
    printf("Digite o simbolo da operacao desejada");
    scanf("%c", &op);
    printf("Digite os numeros desejados");
    scanf("%d %d", &num1, &num2);
    switch (op)
    {
    case '+':
        printf("%d",soma(num1, num2));
        break;
    case '-':
        printf("%d",subtracao(num1, num2));
        break;
    case '*':
        printf("%d",multiplicacao(num1, num2));
        break;
    case '/':
        printf("%d",divisao(num1, num2));
        break;
    default:
        printf("Opcao invalida!");
        break;
    }
}