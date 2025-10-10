/*
24. Leia uma matriz 5 × 5 e, em seguida, leia também um valor X. O programa deverá buscar esse
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de ?não
encontrado?
*/

#include <stdio.h>

int main()
{
    int mat[5][5], x, lin, col, flag = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &x);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(mat[i][j] == x){
                lin = i;
                col = j; 
                flag = 1;
            }
        }
    }
    if(flag == 1) printf("O valor eh: %d, na posicao i = %d e j = %d",mat[lin][col], lin, col);

    else printf("Nao encontrado");
}