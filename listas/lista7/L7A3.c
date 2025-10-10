/*
3. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X
e Y correspondentes a duas posições do vetor. Ao final, o programa deve escrever a soma dos
valores encontrados nas respectivas posições X e Y 
*/

#include <stdio.h>

int main(){
    int vetor[8], x, y, soma = 0;
    for(int i = 0; i < 8; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite a posicao X: ");
    scanf("%d", &x);
    printf("Digite a posicao Y: ");
    scanf("%d", &y);

    soma = vetor[x] + vetor[y];
    printf("A soma dos valores nas posicoes %d e %d eh %d\n", x, y, soma);
}