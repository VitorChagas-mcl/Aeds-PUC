/*3. Crie um programa em C que leia duas strings e compare se elas são iguais, sem utilizar a função
strcmp.*/

#include <stdio.h>

int myCmp(char *str1,char *str2){
    for(int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str1[100], str2[100];
    printf("Digite a primeira string: ");
    scanf("%[^\n]", str1);
    getchar();
    printf("Digite a segunda string: ");
    scanf("%[^\n]", str2);
    getchar();
    if(myCmp(str1, str2)){
        printf("As strings sao iguais.\n");
    }else{
        printf("As strings nao sao iguais.\n");
    }
}