#include <stdio.h>

typedef struct
{
    int horas;
    int min;
} hrsMin;

void hm(int min, hrsMin *horaMin)
{
    horaMin->horas = min / 60;
    horaMin->min = min % 60;
}
int main()
{
    hrsMin horaMin;
    int min = 59;
    hm(min, &horaMin);
    printf("%2d:%2d", horaMin.horas, horaMin.min);
}