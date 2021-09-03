#include <stdio.h>
#include "../test/Division3x3.c"

int main(){
    int ma[3][3], mb[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Elemento ma %d, %d ", i, j);
            scanf("%d", &ma[i][j]);
            printf("\n");
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Elemento mb %d, %d ", i, j);
            scanf("%d", &mb[i][j]);
            printf("\n");
        }
    }
    division3x3(ma, mb);
    return 0;
}

