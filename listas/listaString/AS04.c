/*4. Repita o exercício anterior, mas agora utilizando a função strcmp para realizar a comparação
entre as duas strings.*/

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
    if(strcmp(str1, str2) == 0){
        printf("As strings sao iguais.\n");
    }else{
        printf("As strings nao sao iguais.\n");
    }
}