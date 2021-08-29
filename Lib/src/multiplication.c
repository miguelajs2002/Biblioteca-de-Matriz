// // importar bibliotecas
#include <memory.h>
#include <stdio.h> 
#include <stdlib.h>

int** create_matriz(int);
void freeSpaceMatriz(int **, int);
void addRandomNumberToMatriz(int **, int, int);
void drawMatriz(int **, int);
int columnMult(int **, int);
int rowMult(int **, int);

int multiplication(int size_matriz)
{
  
  int **mat = create_matriz(size_matriz);
  addRandomNumberToMatriz(mat, size_matriz, 15);
  drawMatriz(mat, size_matriz);
  int row = rowMult(mat, size_matriz);
  int column = columnMult(mat, size_matriz);

  printf("\nLa suma total de las filas al realizar la multiplicación de cada fila de la matriz es: %d\n", row);
  printf("La suma total de las columnas al realizar la multiplicación de cada columna de la matriz es: %d\n", column);
  freeSpaceMatriz(mat, size_matriz);
  
  return 0;
}

int** create_matriz(int dim) {
  int** mat = (int **)malloc(dim * sizeof(int *)); 
  for (int i = 0; i < dim; i++) 
    mat[i] = (int *)malloc(dim * sizeof(int));
  return mat;
}

void freeSpaceMatriz(int **mat, int dim) {
  for (int i = 0; i < dim; i++)
    free(mat[i]);
  free(mat);
}

void addRandomNumberToMatriz(int **mat, int dim, int seed) {
  srand(seed);
  for (int i = 0; i < dim; i++)
    for (int j = 0; j < dim; j++)
      mat[i][j] = rand()%10;
}

void drawMatriz(int **mat, int dim) {

  for(int i = 0; i < dim; i++) {
    int accumRow = 1;
    for(int j = 0; j < dim; j++){
      printf("%d\t", mat[i][j]);
      accumRow = accumRow * mat[i][j];
    }
    printf(" =\t%d\n", accumRow );
  }
}

int columnMult(int **mat, int dim) {
  int accum = 0;
  for (int i = 0; i < dim; i++){
    int accumLoop = 1;
    for (int j = 0; j < dim; j++){
      accumLoop = accumLoop * mat[j][i];
    }
    accum += accumLoop;
    printf("= %d\t", accumLoop);
  }

  printf("\n\n\n %d", accum);
  return accum;
}

int rowMult(int **mat, int dim) {
  int accum = 0;
  for (int i = 0; i < dim; i++) {
    int accumLoop = 1;
    for (int j = 0; j < dim; j++){
      accumLoop = accumLoop * mat[i][j];
    }
    accum += accumLoop;
  }
  return accum;
}