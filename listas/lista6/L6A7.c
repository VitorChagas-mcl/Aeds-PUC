#include <stdio.h>

/*7. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores
de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável.
Escreva o conteúdo das 2 variáveis na tela.
*/
#include <stdio.h>
int varicarValor(int* ptrN1,int* ptrN2){
    int aux;
    if(*ptrN1>*ptrN2) aux = *ptrN1;
    else aux = *ptrN2;
    *ptrN1 = aux;
    return 0;
}

int main(){
    int num1, num2;
    printf("Digite dois valores: ");
    scanf("%d %d", &num1, &num2);
    varicarValor(&num1, &num2); 
    printf("O maior numero eh: %d",num1);
}