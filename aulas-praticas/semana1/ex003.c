#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheMatrix(int matrix[3][3], int num1, int num2)
{
    int x, i, j;
    srand(time(NULL));
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            x = rand() % 100;
            if ((x > num1) && (x < num2))
                matrix[i][j] = x;
            else
                j--;
        }
    }
}
int main()
{
    int matrix[3][3], num1, num2, i, j;
    scanf("%d %d", &num1, &num2);
    preencheMatrix(matrix, num1, num2);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%2d ", matrix[i][j]);
        printf("\n");
    }
}