#include <stdio.h>
#include "../include/lib.h"

void division(int F, int C, int MatrizA[F][C], int MatrizB[F][C])
{
    printf("\nLa Division de la MatrizA entre la MatrizB es:\n\n");

    int i, j;

    int MatrizC [F][C];

    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            MatrizC[i][j] = MatrizA[i][j] / MatrizB[i][j];
            printf(" [%d]", MatrizC[i][j]);
        }
		printf("\n");
    }

}