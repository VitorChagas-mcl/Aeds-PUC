/*13. Crie um programa em C que leia uma string contendo um endereço de e-mail e verifique se ele é
válido. Considere um e-mail válido aquele que contém exatamente um caractere ‘@’ e pelo menos
um ponto (‘.’) após o caractere ‘@’.*/

#include <stdio.h>

int main(){
    char email[100];
    int i = 0, arrobar = 0, ponto = 0, posArroba = 0;
    char str[100];
    printf("Digite uma palavra: ");
    scanf("%[^\n]", email);
    getchar();
    for(; email[i] != '\0'; i++){
        if(email[i] == '@'){
            arrobar++;
            posArroba = i;
        }
    }
    for(int j = posArroba; email[j] != '\0'; j++){
        if(email[j] == '.'){
            ponto++;
        }
    }
    if(arrobar == 1 && ponto >= 1){
        printf("Email valido.\n");
    }else{
        printf("Email invalido.\n");
    }
}