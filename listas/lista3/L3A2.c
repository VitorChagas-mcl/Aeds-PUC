#include <stdio.h>

int main(){
    //2. Faça um programa que imprima os L primeiros elementos da serie de Fibonacci.
    int n, t1 = 0, t2 = 1, proxTermo;
    printf("Digite um valor: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d ", t1);
        proxTermo = t1 + t2;
        t1 = t2;
        t2 = proxTermo;
    }
}