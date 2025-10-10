/*
27. Leia uma matriz 3 × 3 de elementos numéricos. Calcule e escreva a soma dos elementos que estão
abaixo da diagonal principal.
*/

#include <stdio.h>

int main(){
    int mat1[3][3], soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i > j)soma += mat1[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("O resulado eh: %d\n", soma);
}
