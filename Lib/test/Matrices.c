
#include <stdio.h>
#include <conio.h>


	int F;
	int C;
	
void Matriz_A()
{
	printf("--MatrizA--\n\n");
	int MatrizA[F][C], i,j, vector [F];
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
		
void Matriz_B()
{
	printf("--MatrizB--\n\n");
	int MatrizB[F][C], i,j, vector [F];
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

int main(){
	printf("Fila:\n");
	scanf("%d", &F);
	printf("Columna:\n");
	scanf("%d", &C);

	Matriz_A();
	Matriz_B();

	getch();
	return 0;
}