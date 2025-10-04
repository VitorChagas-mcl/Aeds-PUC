#include <stdio.h>
/*
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando
os ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/
void trocarValores(int* n, double* r, char* c){
    int num2;double real2;char carac2;
    printf("Digite novamente um numero inteiro, um real, e um caracter: ");
    scanf("%d %lf %c", &num2, &real2, &carac2);
    *n = num2;
    *r = real2;
    *c = carac2;
}

int main(){
    int numI;double real;char carac;
    printf("Digite um numero inteiro, um real, e um caracter: ");
    scanf("%d %lf %c", &numI, &real, &carac);
    printf("Antes: Valor inteiro: %d , Valor real: %.2lf, Caracter: %c\n", numI,real,carac);
    trocarValores(&numI,&real,&carac);
    printf("Depois: Valor inteiro: %d , Valor real: %.2lf, Caracter: %c\n", numI,real,carac);
}