//5. Faça um programa para imprimir os múltiplos de 5

#include <stdio.h>

int main(){
    int n; 
    printf("Digite um valor: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 5 == 0){
            printf("%d ", i);
        }
    }
}