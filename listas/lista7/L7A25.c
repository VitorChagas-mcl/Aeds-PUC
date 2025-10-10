/*
24. Leia duas matrizes 4 × 4 e escreva uma terceira matriz contendo, em cada posição, o maior valor
entre as duas matrizes lidas.
*/

#include <stdio.h>

int main(){
    int mat1[4][4], mat2[4][4], mat3[4][4];
    printf("Escreva a primeira matriz:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Escreva a segunda matriz:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(mat1[i][j] > mat2[i][j]) mat3[i][j] = mat1[i][j];
            else if(mat2[i][j] > mat1[i][j]) mat3[i][j] = mat2[i][j];
        }
    }
    printf("Matriz resultante:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}