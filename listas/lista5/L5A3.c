#include <stdio.h>

/*
Fazer um método recursivo que recebe um número inteiro e positivo n e calcula o somatório
abaixo.
n + (n − 1) + ... + 1 + 0
*/

int somatorio(int n){
    if(n == 0) return 0;
    return n + somatorio(n - 1);
}

int main(){
    int n;
    printf("Digite um numero para n: ");
    scanf("%d", &n);
    printf("A soma do valor de 1 a n eh: %d ", somatorio(n)); 
}