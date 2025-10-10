/*
9. Faça um programa que preencha um vetor com 10 números reais, calcule e mostre:
• a quantidade de números negativos;
• a soma dos números positivos.
*/

#include <stdio.h>

int main(){
    float valores[10], somaPosi = 0;
    int negativos = 0;


    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }
    for(int i = 0; i < 10; i++){
        if(valores[i] < 0){
            negativos++;
        }else{
            somaPosi += valores[i];
        }
    }

    printf("A quantidade de numeros negativos eh %d\n", negativos);
    printf("A soma dos positivos eh %d\n", somaPosi);
}