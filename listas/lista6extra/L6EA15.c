//15. Escreva um programa em C para mostrar como um ponteiro de retorno de função.

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
    printf("O numero maior eh: %d",maiorEndereco(&a, &b));
}
