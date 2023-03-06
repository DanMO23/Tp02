#include <stdio.h>
#include <time.h>
#include <stdlib.h>

float mediaCarros(int qtCarros[])
{
    int i;
    float soma = 0;
    for (i = 0; i < 30; i++)
        soma += qtCarros[i];
    return soma / 30.0;
}

void ordenaVetor(int qtCarros[])
{
    int i, j, aux;
    for (i = 0; i < 30; i++)
    {
        for (j = 0; j < 30; j++)
        {
            if (qtCarros[i] < qtCarros[j])
            {
                aux = qtCarros[i];
                qtCarros[i] = qtCarros[j];
                qtCarros[j] = aux;
            }
        }
    }
}

void preencheVetor(int qtCarros[])
{
    int i;
    srand(time(NULL));
    for (i = 0; i < 30; i++)
        qtCarros[i] = rand() % 100;
    ordenaVetor(qtCarros);
}

int main()
{
    int qtCarros[30], i;
    preencheVetor(qtCarros);
    printf("Media de carros no mes: %.0f\n", mediaCarros(qtCarros));
    for (i = 0; i < 30; i++)
        printf("%d\n", qtCarros[i]);
}