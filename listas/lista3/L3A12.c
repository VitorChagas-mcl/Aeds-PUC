/*
12. Seja a sequência da questão anterior, mostre somente os elementos maiores que a e menores que
b, onde a e b são lidos do teclado.
*/

#include <stdio.h>

int main(){
    int a, b, n, i = 1;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    while(i <= n){
        if(i > a){
            printf("%d \n", i);
        }else if(i < b){
            printf("%d \n", i);
        }
        i += 2;
    }    
}