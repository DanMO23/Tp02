#include "tarefas.h"

int main(){
    Tarefa tarefa;
    ListaTarefas lista1, lista2, listaIntercalada;
    inicializaTarefa(&lista1);
    inicializaTarefa(&lista2);
    inicializaTarefa(&listaIntercalada);
    strcpy(tarefa.atividade, "Trabalho AEDS");
    tarefa.numero = 1;
    insereTarefa(&lista1, tarefa);
    strcpy(tarefa.atividade, "Trabalho ISL");
    tarefa.numero = 2;
    insereTarefa(&lista1, tarefa);
    strcpy(tarefa.atividade, "Trabalho GAAL");
    tarefa.numero = 3;
    insereTarefa(&lista1, tarefa);
    strcpy(tarefa.atividade, "Trabalho Ingles");
    tarefa.numero = 1;
    insereTarefa(&lista2, tarefa);
    strcpy(tarefa.atividade, "Trabalho Calculo");
    tarefa.numero = 2;
    insereTarefa(&lista2, tarefa);
    strcpy(tarefa.atividade, "Trabalho PROG");
    tarefa.numero = 3;
    insereTarefa(&lista2, tarefa);
    imprimiTarefa(&lista1);
    removeTarefa(&lista1, 2);
    imprimiTarefa(&lista1);
    imprimiTarefa(&lista2);
    intercalaTarefa(&lista1, &lista2, &listaIntercalada);
    imprimiTarefa(&listaIntercalada);
}