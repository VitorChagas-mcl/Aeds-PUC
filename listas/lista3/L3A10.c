//10. Faça um programa que mostre na tela os n primeiros elementos da sequência 1, 3, 5, 7, 9,..

#include <stdio.h>

int main(){
    int n, i = 1;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    while(i <= n){
        printf("%d ", i);
        i+=2;
    }
}