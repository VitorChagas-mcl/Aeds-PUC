/*
9. Leia um número inteiro I e um número real R. Enquanto I maior que 10, imprima o valor de I na
tela, decremente o valor de I em duas unidades e enquanto R menor que 10, imprima os valores
de R e I na tela e incremente o valor de R em uma unidade.
*/

#include <stdio.h>

int main(){
    int I;
    float R;
    printf("Digite o valor de I: ");
    scanf("%d", &I);
    printf("Digite o valor de R: ");
    scanf("%f", &R);
    while(I > 10){
        printf("I = %d\n", I);
        I-=2;
        while(R < 10){
          printf("R = %.2f\n", R);
          R++;
        }
    }
}