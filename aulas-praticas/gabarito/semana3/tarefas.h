#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

typedef struct tarefa{
    int num;
    char nome[100];
} Tarefa;

typedef struct listaTarefas{
    Tarefa tarefa[TAM];
    int primeiro, ultimo;
} listaTarefas;

void iniciarLista(listaTarefas *tarefas);
int inserirTarefa(listaTarefas *tarefas, Tarefa tarefa);
int removarTarefa(listaTarefas *tarefas, int num);
void imprimirLista(listaTarefas *tarefas);
void intercalar(listaTarefas *tarefas1, listaTarefas *tarefas2, listaTarefas *tarefasResultado);