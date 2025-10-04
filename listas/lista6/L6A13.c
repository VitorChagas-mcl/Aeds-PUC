/*
13. Crie uma função que receba um ponteiro para inteiro representando um número e substitua o
valor pelo seu fatorial.
*/
#include <stdio.h>

int fatorial(int n){
    if(n == 0 || n == 1){
        return 1;   
    }
    return n * fatorial(n - 1);
}

int fatorial_implace(int* ptrA){
    if(*ptrA < 0 || ptrA == NULL){
        *ptrA = -1;
        return -1;
    }
    if(*ptrA == 0 || *ptrA == 1){
        *ptrA = 1;
        return 1;
    }else{
        *ptrA = fatorial(*ptrA);
    }
    return 0;
}

int main()
{
    int a;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    fatorial_implace(&a);
    printf("O valor modificado eh: %d\n", a);
}
