#include <stdio.h>
/*
2. Escreva um programa em C para somar dois números usando ponteiros.
Exemplo:
Entre com o primeiro número: 5
Entre com o segundo número: 6
A soma dos números informados: 11
*/

int main(){
    int num1, num2;
    printf("Digite dois valores: ");
    scanf("%d %d", &num1, &num2);
    int *ptrN1 = &num1;
    int *ptrN2 = &num2;
    int resp = *ptrN1+*ptrN2; 
    printf("A soma desses valores eh: %d",resp);
}