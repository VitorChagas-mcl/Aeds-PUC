/*
10. Faça um programa que leia 5 valores e, em seguida, mostre todos os valores lidos juntamente
com o maior, o menor e a média dos valores.
*/

#include <stdio.h>

int main(){
    int vetor[5], maior, menor, soma = 0;
    float media = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);        
    }
    maior = vetor[0];
    menor = vetor[0];
    for(int i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }else if(vetor[i] < menor){
            menor = vetor[i];
        }
        soma += vetor[i];
    }

    for(int i = 0; i < 10; i++){
        printf("O valor na posicao %d eh %d\n", i, vetor[i]);
    }

    printf("O maior valor do vetor eh %d e o menor valor eh %d\n", maior, menor);
    media = (float)soma/5;
    printf("A media dos valores eh %.2f\n", media);
}