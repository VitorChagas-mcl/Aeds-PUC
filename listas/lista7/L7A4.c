//4. Leia um vetor de 10 posições. Conte e escreva quantos valores pares ele possui.

#include <stdio.h>

int main(){
    int vetor[10], contador = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);        
    }
    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            contador++;
        }
    }
    printf("O vetor possui %d valores pares\n", contador);
}