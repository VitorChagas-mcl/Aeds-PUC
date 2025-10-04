#include <stdio.h>

/*4. Escreva um programa em C para encontrar o fatorial de um determinado número usando pon-
teiros.
Exemplo:
Número de entrada: 5
O fatorial de 5 é: 120
*/
#include <stdio.h>
int fatorial(int* ptrN1){
    int aux = *ptrN1;
    if(aux == 0 || aux == 1){
      *ptrN1 = 1;
      return 1;
    }
    int fat = 1;
    for(int i = 1; i <= aux; i++) {
        fat *= i;
    }
    *ptrN1 = fat;
    return 0;
}

int main(){
    int num1;
    printf("Digite um valor: ");
    scanf("%d", &num1);
    fatorial(&num1); 
    printf("O fatorial eh: %d",num1);
}