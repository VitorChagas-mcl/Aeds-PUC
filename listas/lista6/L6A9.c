#include <stdio.h>
/*
9. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida, faça uma função que
retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro de A na
própria variável A e o dobro de B na própria variável B.
*/

int dobro(int* ptrN1,int* ptrN2){
    *ptrN1 = *ptrN1*2;
    *ptrN2 = *ptrN2*2;
}

int main(){
    int num1, num2;
    printf("Digite dois valores: ");
    scanf("%d %d", &num1, &num2);
    printf("Valores de A = %d e B = %d antes da funcao\n", num1,num2);
    dobro(&num1, &num2); 
    printf("Valores de A = %d e B = %d depois da funcao\n", num1,num2);
}