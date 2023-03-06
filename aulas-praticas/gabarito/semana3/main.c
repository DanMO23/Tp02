#include "tarefas.h"

int main(){
    listaTarefas lista1, lista2, listaIntercalada;
    Tarefa tarefa;

    // Iniciando as Listas
    iniciarLista(&lista1);
    iniciarLista(&lista2);
    iniciarLista(&listaIntercalada);

    // Inserindo Tarefas em Cada Lista
    tarefa.num = 1;
    strcpy(tarefa.nome, "Estudar AEDS");
    inserirTarefa(&lista1, tarefa);
    tarefa.num = 2;
    strcpy(tarefa.nome, "Estudar ISL");
    inserirTarefa(&lista1, tarefa);
    tarefa.num = 3;
    strcpy(tarefa.nome, "Estudar Inglês");
    inserirTarefa(&lista1, tarefa);

    tarefa.num = 1;
    strcpy(tarefa.nome, "Estudar AEDS");
    inserirTarefa(&lista2, tarefa);
    tarefa.num = 2;
    strcpy(tarefa.nome, "Estudar ISL");
    inserirTarefa(&lista2, tarefa);
    tarefa.num = 3;
    strcpy(tarefa.nome, "Estudar Inglês");
    inserirTarefa(&lista2, tarefa);

    // Imprimindo as Listas
    imprimirLista(&lista1);
    imprimirLista(&lista2);

    // Removendo Item das Listas
    removarTarefa(&lista1, 0);
    removarTarefa(&lista2, 1);

    // Intercalando as Listas
    intercalar(&lista1, &lista2, &listaIntercalada);

    // Imprimindo Novas Lista
    imprimirLista(&listaIntercalada);
}