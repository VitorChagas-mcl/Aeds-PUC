//16. Escreva int fatorial_inplace(int *n); que substitua *n por fatorial(*n) e retorne 0 em sucesso (-1 se *n < 0)

#include <stdio.h>
int fatorial(int num){
    if(num == 0 || num == 1){
      return 1;
    }
    return num * fatorial(num - 1);
}
int fatorial_inplace(int *ptr){
    if(*ptr < 0 || ptr == NULL){
        *ptr = -1;
        return -1;
    }else{
        *ptr = fatorial(*ptr);
    }
    return 0;
}
int main(){
    int num1;
    printf("Digite um valor: ");
    scanf("%d", &num1);
    fatorial_inplace(&num1); 
    printf("O fatorial eh: %d",num1);
}