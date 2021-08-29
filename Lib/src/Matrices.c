//#include "../include/lib.h"
#include <stdio.h>
#include <conio.h>
#include "Test_Resta.c"

	int F;
	int C;
	
void Matriz_A(int MatrizA[][C])
{
	printf("--MatrizA--\n\n");
	int i,j, vector [F];
		for(i=0; i<F; i++)
			for(j=0; j<C; j++)
			{
			printf("Ingrese el elemento [%d][%d]: ", i,j);
			scanf("%d", &MatrizA[i][j]);
			vector[i]=vector[i]+MatrizA[i][j];
			}
		printf("La MatrizA generada es:\n\n");
			for(i=0; i<F; i++)
			{
				for(j=0; j<C; j++)
				{
				printf("[%d]", MatrizA[i][j]);
				}
			printf("\n\n");
			}
		}
		
void Matriz_B(int MatrizB[][C])
{
	printf("--MatrizB--\n\n");
	int i,j, vector [F];
		for(i=0; i<F; i++)
			for(j=0; j<C; j++)
			{
			printf("Ingrese el elemento [%d][%d]: ", i,j);
			scanf("%d", &MatrizB[i][j]);
			vector[i]=vector[i]+MatrizB[i][j];
			}
		printf("La MatrizB generada es:\n\n");
			for(i=0; i<F; i++)
			{
				for(j=0; j<C; j++)
				{
				printf("[%d]", MatrizB[i][j]);
				}
			printf("\n");
			}
		}

main(){
	printf("Fila:\n");
	scanf("%d", &F);
	printf("Columna:\n");
	scanf("%d", &C);

	int MatrizA[F][C];
	int MatrizB[F][C];

	Matriz_A(MatrizA);
	Matriz_B(MatrizB);

	resta(F, C, MatrizA, MatrizB); //Invocacion de la clase 'resta'

	getch();
	return 0;
}