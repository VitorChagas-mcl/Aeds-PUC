#include <stdio.h>
/*
Escreva um programa em C para adicionar números usando chamada por referência.
Exemplo:
Entre com o primeiro número: 5
Entre com o segundo número: 6
A soma de 5 e 6 é 11
*/

int soma(int* ptrN1,int* ptrN2){
    return *ptrN1+*ptrN2;
}

int main(){
    int num1, num2;
    printf("Digite dois valores: ");
    scanf("%d %d", &num1, &num2);
    int resp = soma(&num1, &num2); 
    printf("A soma desses valores eh: %d",resp);
}