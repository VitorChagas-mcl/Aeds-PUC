/*13. Faça um programa que leia um vetor de 10 números inteiros. Em seguida, leia um número inteiro
x. Conte e mostre na tela todos os elementos do vetor que são múltiplos de x.
*/

#include <stdio.h>

int main(){
    int vet[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }
    int x, cont = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    for(int i = 0; i < 10; i++){
        if(vet[i] % x == 0){
            cont++;
            printf("%d eh multiplo de %d\n", vet[i], x);
        }
    }
    printf("Existem %d multiplos de %d no vetor\n", cont, x);
}