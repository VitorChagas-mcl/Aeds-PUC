/*
14. Escreva um programa que declare duas variáveis inteiras, leia seus valores e compare os endereços
de memória. O programa deve imprimir qual endereço é maior e também o valor armazenado
nele.
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
    printf("O maior endereco tem o valor %d, endereco %p\n",maiorEndereco(&a, &b), &a > &b ? &a : &b);
}
