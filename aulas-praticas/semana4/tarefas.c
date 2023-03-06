#include "tarefas.h"

void insereTarefa(ListaTarefas *lista, Tarefa tarefa){
    if(lista->ultimo>=TAM)
        return ;
    lista->listaTarefa[lista->ultimo] = tarefa;
    lista->ultimo++;
}
void removeTarefa(ListaTarefas *lista, int num){
    int i;
    if((num-1) > lista->ultimo || (num-1) < lista->primeiro)
        return;
    for(i=(num-1); i<(lista->ultimo-1); i++){
        lista->listaTarefa[i] = lista->listaTarefa[i+1];
    }
    lista->ultimo--;
}
void imprimiTarefa(ListaTarefas *lista){
    int i;
    for(i=0;i<lista->ultimo;i++)
        printf("%s\n", lista->listaTarefa[i].atividade);
    printf("\n\n");
}

void intercalaTarefa(ListaTarefas *lista1, ListaTarefas *lista2, ListaTarefas *listaIntercalada){
    int i;
    for(i=0;i<(lista1->ultimo+lista2->ultimo);i++){
        if(i<lista1->ultimo){
            insereTarefa(listaIntercalada, lista1->listaTarefa[i]);
        }
        if(i<lista2->ultimo){
            insereTarefa(listaIntercalada, lista2->listaTarefa[i]);
        }
    }
}
void inicializaTarefa(ListaTarefas *lista){
    lista->primeiro = 0;
    lista->ultimo = 0;
}