#include <stdio.h>

/*1. Crie um programa em C que leia uma string e determine o seu comprimento, sem utilizar a
função strlen.*/

int myLen(char *str){
    if(*str == '\0'){
        return 0;
    }else{
        return 1 + myLen(str + 1);
    }
}

int main(){
    char str[100];
    printf("Digite uma string: ");
    scanf("%[^\n]", str);
    int len = myLen(str);
    printf("O comprimento da string eh: %d\n", len);
}