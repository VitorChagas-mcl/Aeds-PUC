//5. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida, o programa deverá imprimir o maior e o menor elemento do vetor.

#include <stdio.h>

int main(){
    int vetor[10], maior, menor;

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
    }

    printf("O maior valor do vetor eh %d e o menor valor eh %d\n", maior, menor);
}