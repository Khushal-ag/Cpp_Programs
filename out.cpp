#include <stdio.h>

#define R 4

#define C 4

void modifyMatrix(int mat[][C])
{
    mat++;

    mat[1][1] = 100;

    mat++;

    mat[1][1] = 200;
}
void printMatrix(int mat[][C])
{
    int i, j;

    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)

            printf("%d", mat[i][j]);
    }
}
int main()
{
    int mat[R][C] = {{10, 20, 30, 40},

                     {50, 60, 70, 80},

                     {1, 2, 3, 4},

                     {5, 6, 7, 8}

    };
    printMatrix(mat);
    modifyMatrix(mat);
    printMatrix(mat);
    return 0;
}