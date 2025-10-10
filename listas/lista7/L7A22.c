/*
22. Faça um programa que preencha uma matriz 4 × 4 com o produto do número da linha pelo
número da coluna de cada elemento. Em seguida, imprima na tela a matriz resultante.
*/

#include <stdio.h>

int main(){
    int mat[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            mat[i][j] = i * j;
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
           printf("O valor eh: %d",mat[i][j]);
        }
        printf("\n");
    }
}