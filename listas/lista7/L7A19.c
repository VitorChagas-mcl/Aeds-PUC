/*19. Faça um programa que leia uma matriz 4 × 4 e imprima a soma dos elementos que estão na
diagonal principal
*/

#include <stdio.h>

int main(){
    int mat[4][4], soma = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        soma += mat[i][i];
    }
    printf("A soma dos elementos da diagonal principal eh %d\n", soma);
}