#include <stdio.h>

void verificaDias(int dias){
    int diaMes;
    char meses[12][30] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    diaMes = dias % 30;
    if(dias % 30 == 0)
     diaMes++;
    printf("%d de %s\n", diaMes, meses[dias/30]);
}
int main(){
    int dias;
    scanf("%d", &dias);
    verificaDias(dias);
    return 0;
}