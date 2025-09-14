#include <stdio.h>

/*Fazer um método recursivo que recebe um número inteiro e retorna o seu fatorial
*/

int fatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fatorial(n - 1);
}

int main(){
    int n;
    printf("Digite um numero para n: ");
    scanf("%d", &n);
    printf("O valor de fatorial eh: %d ", fatorial(n));
}