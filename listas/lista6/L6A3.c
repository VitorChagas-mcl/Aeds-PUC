#include <stdio.h>

/*Escreva um programa em C para encontrar o número máximo entre dois números usando um
ponteiro.
Exemplo:
Entre com o primeiro número: 5
Entre com o segundo número: 6
6 é o maior valor.
*/
int varicarValor(int* ptrN1,int* ptrN2){
    int aux;
    if(*ptrN1>*ptrN2) aux = *ptrN1;
    else aux = *ptrN2;
    return aux;
}

int main(){
    int num1, num2;
    printf("Digite dois valores: ");
    scanf("%d %d", &num1, &num2);
    int resp = varicarValor(&num1, &num2); 
    printf("O maior numero eh: %d",resp);
}