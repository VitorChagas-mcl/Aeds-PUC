/*6. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor,
o maior elemento e a posição em que ele se encontra.*/

#include <stdio.h>

int main(){
    int vetor[10], maior, posicao;
    
    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);        
    }
    maior = vetor[0];
    posicao = 0;
    for(int i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("O maior valor do vetor eh %d na posicao %d\n", maior, posicao);
}