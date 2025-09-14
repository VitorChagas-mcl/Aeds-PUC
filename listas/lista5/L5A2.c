#include <stdio.h>

/*
Fazer um método recursivo que recebe um número inteiro n e retorna o n-ésimo termo da equação
de recorrência abaixo:
T (1) = 2
T (2) = 3
T (n) = 5 ∗ n + T (n − 1)n
*/

int T(int n){
    if(n == 1) return 2;
    if(n == 2) return 3;
    return 5 * n + T(n -1) * n;
}

int main(){
    int n;
    printf("Digite um numero para n: ");
    scanf("%d", &n);
    printf("O n-esimo termo eh: %d ", T(n)); 
}