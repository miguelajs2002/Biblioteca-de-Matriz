/**@brief Funcion de la suma de la Primer Matriz y la segunda Matriz
 * @param F 1er parametro, contiene el numero de las filas de las matrices
 * @param C 2do parametro, contiene el numero de las columas de las matrices
 * @param MatrizA 3er parametro, la matriz con los sumandos
 * @param MatrizB 4to parametro, la matriz con los sumandos
 * @returns No regresa nada a Main, pero imprime MatrizC con todas las diferencias
 */
#include "../test/Matrices.c"
#include <stdio.h>

void suma (int F, int C, int MatrizA[F][C], int MatrizB[F][C])
{
    printf("\nLa suma de la MatrizA mas la MatrizB es:\n\n");
    int i, j;
    int MatrizC[F][C];
    //int MatrizA[F][C], MatrizB[F][C];
    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            MatrizC[i][j] = (MatrizA[i][j] + MatrizB[i][j]);
            printf(" [%d] ", MatrizC[i][j]);
        }
		printf("\n");
    }
}
