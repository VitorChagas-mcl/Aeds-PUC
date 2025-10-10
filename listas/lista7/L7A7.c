/*7. Crie um programa que leia 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa.*/

#include <stdio.h>

int main(){
    int vetor[10];
    
    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);        
    }

    for(int i = 0; i < 10; i++){
        printf("O valor na posicao %d eh %d\n", 10 - i, vetor[10 - 1 - i]);
    }
}