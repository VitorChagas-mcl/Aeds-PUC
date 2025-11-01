//8. Repita o exercício anterior, mas agora utilizando a função strcpy para realizar a cópia da string.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    printf("Digite a primeira string: ");
    scanf("%[^\n]", str1);
    getchar();
    getchar();
    char str2[200];
    strcpy(str2, str1);
    printf("String copiada: %s\n", str2);
}