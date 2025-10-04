#include <stdio.h>
/*
8. Crie um programa que contenha uma função que permita passar por parâmetro dois números
inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado
na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro
parâmetro. Imprima os valores de A e B na função principal.
*/

int soma(int* ptrN1,int* ptrN2){
    *ptrN1 = *ptrN1+*ptrN2;
}

int main(){
    int num1, num2;
    printf("Digite dois valores: ");
    scanf("%d %d", &num1, &num2);
    printf("Valores de A = %d e B = %d antes da funcao\n", num1,num2);
    soma(&num1, &num2); 
    printf("Valores de A = %d e B = %d depois da funcao\n", num1,num2);
    printf("A soma desses valores eh: %d",num1);
}