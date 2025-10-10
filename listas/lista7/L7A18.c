/*
18. Leia 10 números inteiros e armazene-os em um vetor. Em seguida, escreva na tela os elementos
que são números primos e suas respectivas posições no vetor.
*/

#include <stdio.h>

#define TAM 10
int main(){
    int vet[TAM];
    for(int i = 0; i < TAM; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < TAM; i++){
        int cont = 0;
        for(int j = 1; j <= vet[i]; j++){
            if(vet[i] % j == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("%d eh primo e esta na posicao %d\n", vet[i], i);
        }
    }
}