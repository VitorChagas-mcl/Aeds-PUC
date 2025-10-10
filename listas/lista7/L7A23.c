/*
23. Leia uma matriz 4 × 4, imprima a matriz e informe a localização (linha e coluna) do maior valor
encontrado.
*/

#include <stdio.h>

int main(){
    int mat[4][4], maior, lin, col;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    maior = mat[0][0];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
                lin = i;
                col = j;
            }
        }
    }

    printf("O valor eh: %d, na posicao i = %d e j = %d",mat[lin][col], lin, col);
}