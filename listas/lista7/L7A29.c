/*29. Gere uma matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a
matriz gerada em uma matriz triangular inferior, ou seja, atribuindo zero a todos os elementos
acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int mat1[4][4];
    srand(time(NULL));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            mat1[i][j] = reand () % 20 + 1;
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i > j) mat1[i][j] = 0;
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
}