/*
12. Escreva um programa que leia um número inteiro, passe o endereço desse número a uma função
e essa função modifique o valor: se for par, transforme-o em zero; se for ímpar, dobre o valor.
*/
#include <stdio.h>

int modificarValor(int *ptrA)
{
    if (*ptrA % 2 == 0)
    {
        *ptrA = 0;
    }
    else
    {
        *ptrA *= 2;
    }
    return *ptrA;
}

int main()
{
    int a;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    modificarValor(&a);
    printf("O valor modificado eh: %d\n", a);
}
