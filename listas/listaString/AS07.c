//7. Crie um programa em C que leia uma string e a copie para outra variável, sem utilizar a função strcpy.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    printf("Digite a primeira string: ");
    scanf("%[^\n]", str1);
    getchar();
    char str2[200];
    int i = 0;
    for(; str1[i] != '\0'; i++){
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("String copiada: %s\n", str2);
}