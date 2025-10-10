 /*30. Faça um programa para gerar automaticamente números inteiros entre 0 e 99 que compõem uma
cartela de bingo. Cada cartela deve conter 5 linhas e 5 colunas, totalizando 25 números. Gere
os dados de modo a não haver números repetidos dentro da cartela. O programa deve exibir na
tela a cartela gerada.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int mtz[10][10];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            mtz[i][j] = rand() % 100;
        }
    }
    printf("Cartela de bingo\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ",mtz[i][j]);
        }
        printf("\n");
    }
}