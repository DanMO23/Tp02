#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10
typedef struct 
{
    int numero;
    char atividade[100];
}Tarefa;

typedef struct 
{
    Tarefa listaTarefa[TAM];
    int primeiro, ultimo;
}ListaTarefas;

void insereTarefa(ListaTarefas *lista, Tarefa atividade);
void inicializaTarefa(ListaTarefas *lista);
void imprimiTarefa(ListaTarefas *lista);
void removeTarefa(ListaTarefas *lista, int num);
void intercalaTarefa(ListaTarefas *lista1, ListaTarefas *lista2, ListaTarefas *listaIntercalada);