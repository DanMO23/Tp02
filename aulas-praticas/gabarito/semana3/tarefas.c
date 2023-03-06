#include "tarefas.h"

void iniciarLista(listaTarefas *tarefas){
    tarefas->primeiro = tarefas->ultimo = 0;
}

int inserirTarefa(listaTarefas *tarefas, Tarefa tarefa){
    if(tarefas->ultimo == TAM) return 0;

    tarefas->tarefa[tarefas->ultimo] = tarefa;
    tarefas->ultimo++;
    return 1;
}

int removarTarefa(listaTarefas *tarefas, int num){
    if(num >= tarefas->ultimo || num < tarefas->primeiro) return 0;

    Tarefa tarefa;
    tarefa = tarefas->tarefa[num];

    for(int i=num; i<(tarefas->ultimo-1); i++) tarefas->tarefa[i] = tarefas->tarefa[i+1];

    tarefas->ultimo--;
    return 1;
}

void imprimirLista(listaTarefas *tarefas){
    printf("\n---- Elementos da Lista ----\n\n");
    for(int i=0; i<tarefas->ultimo; i++){
        printf("Número: %d\n", tarefas->tarefa[i].num);
        printf("Nome: %s\n\n", tarefas->tarefa[i].nome);
    }

    printf("\n----------------------------\n\n");
}

void intercalar(listaTarefas *tarefas1, listaTarefas *tarefas2, listaTarefas *tarefasResultado){
    int tamanho = (tarefas1->ultimo > tarefas2->ultimo) ? tarefas1->ultimo : tarefas2->ultimo;

    for(int i=0; i<tamanho; i++){
        if(i < tarefas1->ultimo) inserirTarefa(tarefasResultado, tarefas1->tarefa[i]);
        if(i < tarefas2->ultimo) inserirTarefa(tarefasResultado, tarefas2->tarefa[i]);
    }
}