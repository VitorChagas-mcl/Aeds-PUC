#include <stdio.h>

int contarDigitos(int n){
    if(n < 10) return 1;
    return 1 + contarDigitos(n / 10);
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("O numero %d tem %d digitos", n, contarDigitos(n));
}