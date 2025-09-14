#include <stdio.h>

//Fazer um método recursivo que multiplique dois números naturais, através de somas sucessivas

int multiplicacao(int a, int b){
    if(b == 0) return 0;
    return a + multiplicacao(a, b - 1);
}

int main(){
    int a, b;
    printf("Digite um numero para a e b: ");
    scanf("%d %d", &a, &b);
    printf("A multiplicacao dos valores %d e %d eh: %d\n", a, b, multiplicacao(a, b)); 
}