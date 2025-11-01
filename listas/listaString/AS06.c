/*6. Repita o exercício anterior, mas agora utilizando a função strcat para realizar a concatenação.*/

#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    printf("Digite a primeira string: ");
    scanf("%[^\n]", str1);
    getchar();
    printf("Digite a segunda string: ");
    scanf("%[^\n]", str2);
    getchar();
    char str3[200];
    strcat(str3, str1);
    strcat(str3, str2);
    printf("String concatenada: %s\n", str3);
}