//10. Escreva um programa em C para trocar elementos usando chamada por referência

void trocarValor(int* ptrN1, int* ptrN2, int* ptrN3){
    int aux;
    aux = *ptrN1;
    *ptrN1 = *ptrN3;
    *ptrN3 = *ptrN2;
    *ptrN3 = aux;
}

#include <stdio.h>

int main(){
    int a, b, c;
    printf("Digite o valor de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Os valores antes da troca são:\nEndereco do elemento 1 = %d\nEndereco do elemento 2 = %d\nEndereco do elemento 3 = %d\n",a,b,c);
    trocarValor(&a,&b,&c);
    printf("Os valores apos a troca são:\nEndereco do elemento 1 = %d\nEndereco do elemento 2 = %d\nEndereco do elemento 3 = %d",a,b,c);
}