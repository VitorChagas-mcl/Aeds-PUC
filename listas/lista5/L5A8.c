#include <stdio.h>

int aux(int n, int i){
    if(i == 1) return 0;
    if(n % i == 0) return 1;
    return aux(n, i-1);
}

int primo(int n){
    if(n < 2) return 1;
    return aux(n, n - 1);
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(primo(n))printf("O numero %d eh primo", n);
    else printf("O numero %d nao eh primo", n);
}