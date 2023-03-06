#include <stdio.h>

void trocaVar(int *a, int *b, int *c)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = *c;
    *c = aux;
}
int main()
{
    int a = 45, b = 676, c = 234;
    trocaVar(&a, &b, &c);
    printf("%d %d %d", a, b, c);
}