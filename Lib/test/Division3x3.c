/*
 *@brief Funcion de la división de 2 matrices, no existe la división como tal, se calcula la determinante
 * y después la matriz inversa que es divisor en la operación, debido a la complicación de esta implementación, solo actua en matrices de 3x3
 * @param matrizA [][] matriz para dividida
 * @param matrizB [][] matriz divisor
 * @returns no regresa algo, imprime resultado
*/
#include "../include/lib.h"
#include <stdio.h> //se importan bibliotecas

int determinante(int matriz[3][3]);

void division3x3(int matrizA[3][3], int matrizB[3][3]){
    int aux [3][3], adj[3][3], dete;
    dete = determinante(matrizB);

    for(int i = 0; i < 3; i++){
        for( int j = 0; j < 3; j++){            
            aux [j][i] = matrizB[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for( int j = 0; j < 3; j++){
            if (i == 0){
                if (j == 0)
                    adj [i][j] = (aux [1][1] * aux [2][2]) - (aux [2][1] * aux [1][2]);
                else if( j == 1)
                    adj [i][j] = -((aux [1][0] * aux [2][2]) - (aux [2][0] * aux [1][2]));
                else 
                    adj [i][j] = (aux [1][0] * aux [2][1]) - (aux [2][0] * aux [1][1]);
            }

            if (i == 1){
                if (j == 0)
                    adj [i][j] = -((aux [0][1] * aux [2][2]) - (aux [2][1] * aux [0][2]));
                else if( j == 1)
                    adj [i][j] = (aux [0][0] * aux [2][2]) - (aux [2][0] * aux [0][2]);
                else 
                    adj [i][j] = -((aux [0][0] * aux [2][1]) - (aux [2][0] * aux [0][1]));
            }

            if (i == 2){
                if (j == 0)
                    adj [i][j] = (aux [0][1] * aux [1][2]) - (aux [1][1] * aux [0][2]);
                else if( j == 1)
                    adj [i][j] = -((aux [0][0] * aux [1][2]) - (aux [1][0] * aux [0][2]));
                else 
                    adj [i][j] = (aux [0][0] * aux [1][1]) - (aux [1][0] * aux [0][1]);
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for( int j = 0; j < 3; j++){
            aux [i][j] = (adj[i][j]/dete);
        }
        
    }
    printf("dete: %d\n", dete);
    printf("Resultado: \n\n");

    for(int k = 0; k < 3; k++){

        for(int i = 0; i < 3; i++){
            int suma = 0;

            for( int j = 0; j < 3; j++){
                suma += (matrizA [i][j] * aux [j][k]); 
            }   
        adj [i][k] = suma;
        printf("%d  ", adj [i][k]);

        }   
        printf("\n");
    }

}

int determinante(int matriz[3][3]){
    int det = 0;
    int detb = 0;
    det = matriz[0][0] * matriz[1][1] * matriz[2][2];
    det += ( matriz[1][0] * matriz[1][2] * matriz[2][1]);
    det += ( matriz[1][0] * matriz[2][1] * matriz[0][2]);
    detb = matriz[2][0] * matriz[1][1] * matriz[0][2];
    detb += ( matriz[1][0] * matriz[0][1] * matriz[2][2]);
    detb += ( matriz[2][1] * matriz[1][2] * matriz[0][0]);
    det -= detb;
    return det;
}



