#include <stdio.h>

int main(){
    //1. Fazer um programa para ler n números inteiros e imprimir a soma deles. O n valor de deve ser lido do teclado.
    int n, soma = 0;
    printf("Digite um valor: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        soma += i;
    }
    printf("A soma dos valores eh: %d \n", soma);
}