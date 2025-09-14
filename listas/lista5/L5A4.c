#include <stdio.h>

//Fazer um método recursivo que imprima de um número natural em base binária

void binario(int n){
    if(n == 0) return;
    binario(n / 2);
    printf("%d", n % 2);
}

int main(){
    int n;
    printf("Digite um numero para n: ");
    scanf("%d", &n);
    binario(n);
}