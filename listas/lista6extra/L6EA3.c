//3. Escreva um programa em C para calcular o comprimento da string usando um ponteiro.

#include <stdio.h>

int contarChar(char* palavra){
    int aux = 0;
    if(*palavra != '\0'){
        aux = 1 + contarChar(palavra + 1);
    }else{
        return 0;
    }
    return aux;
}

int main() {
    char palavra[30];
    printf("Digite uma palavra ou frase: ");
    scanf("%s", palavra);
    printf("%d", contarChar(palavra));
    return 0;
}
