//10. Escreva um programa em C para trocar elementos usando chamada por referência

void fatorial(int* ptrN1){
    int fat = 1;
    for(int i = 1; i <= *ptrN1; i++){
        fat *= i;
    }
    *ptrN1 = fat;
}

#include <stdio.h>

int main(){
    int a;
    printf("Digite o valor de a");
    scanf("%d", &a);
    fatorial(&a);
    printf("O fatorial de a eh: %d", a);
}