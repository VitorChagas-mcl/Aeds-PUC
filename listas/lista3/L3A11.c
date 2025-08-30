/*
1. Faça um programa que mostre na tela os n primeiros elementos da sequência anterior que forem
divisíveis por três AND múltiplos de cinco OR divisíveis por sete
*/

#include <stdio.h>

int main(){
    int n, i = 1;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    while(i <= n){
        if((i % 3 == 0 && i % 5 == 0) || i % 7 == 0){
            printf("%d ", i);
        }
        i += 2;
    }    
}