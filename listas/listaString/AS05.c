/*5. Crie um programa em C que leia duas strings e as concatene em uma terceira string, sem utilizar
a função strcat.*/

#include <stdio.h>

int main(){
    char str1[100], str2[100];
    printf("Digite a primeira string: ");
    scanf("%[^\n]", str1);
    getchar();
    printf("Digite a segunda string: ");
    scanf("%[^\n]", str2);
    getchar();
    char str3[200];
    int i = 0;
    for(; str1[i] != '\0'; i++){
        str3[i] = str1[i];
    }
    for(int j = 0; str2[j] != '\0'; j++, i++){
        str3[i] = str2[j];
    }
    str3[i] = '\0';
    printf("String concatenada: %s\n", str3);
}