/*
13. Faça um programa que leia um caractere e se esse for uma caractere maiúscula, imprima “Maiúscula”.
Senão, se ele for uma caractere minúscula, imprima “Minúscula”. Senão, se for um dígito, imprima
dígito. Senão imprima “Outro caractere”.
*/

#include <stdio.h>

int main(){
    char caractere;
    printf("Entre com uma letra ou numero: ");
    scanf("%c", &caractere);
    if(caractere >= 0 && caractere <= 9){ 
        printf("Digito\n");
    }else if(caractere >= 97 && caractere <= 122 ){
        printf("Minuscula\n");
    }else if(caractere >= 65 && caractere <= 90){
        printf("Maiuscula\n");
    }else{
        printf("Outro caractere\n");
    }

}