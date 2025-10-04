/*
11. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em
seguida, compare seus endereços e exiba o conteúdo do maior endereço.
*/
#include <stdio.h>

int maiorEndereco(int* ptrA, int* ptrB){
    int aux;
    if(ptrA > ptrB){
        aux = *ptrA;
    }else{
        aux = *ptrB;
    }
    return aux;
}

int main()
{
    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    maiorEndereco(&a, &b);
    printf("O maior endereco tem o valor %d\n",maiorEndereco(&a, &b));
}
