#include <stdio.h>
/*
10. Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de
entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor
valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1
se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na
tela.
*/

int ordenados(int* ptrN1,int* ptrN2, int* ptrN3){
    int aux;
    if(*ptrN1 == *ptrN2 && *ptrN2 == *ptrN3){
        return 1;
    } 
    if(*ptrN1 > *ptrN2){
        aux = *ptrN1;
        *ptrN1 = *ptrN2;
        *ptrN2 = aux;
    }
    if(*ptrN1 > *ptrN3){
        aux = *ptrN1;
        *ptrN1 = *ptrN3;
        *ptrN3 = aux;
    }
    if(*ptrN2 > *ptrN3){
        aux = *ptrN2;
        *ptrN2 = *ptrN3;
        *ptrN3 = aux;
    }
    return 0;
}

int main(){
    int num1, num2, num3;
    printf("Digite tres valores: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Valores fora de ordem %d,%d,%d\n", num1,num2,num3);
    int retorno = ordenados(&num1, &num2,&num3); 
    printf("Valores ordenados %d,%d,%d\n", num1,num2,num3);
    printf("Retorno da função %d\n", retorno);
}