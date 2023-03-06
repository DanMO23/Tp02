#include <stdio.h>

void zeraVar(int *a, int *b)
{
    *a = 0;
    *b = 0;
}
int main()
{
    int a = 7, b = 53;
    zeraVar(&a, &b);
    printf("%d %d", a, b);
}