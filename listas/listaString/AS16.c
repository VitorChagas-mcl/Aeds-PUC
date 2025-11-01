/*16. Crie um programa em C que leia uma string e converta todas as letras minúsculas para maiúsculas,sem utilizar a função strupr.*/

#include <stdio.h>

int main(){
    char str[100];
    printf("Digite uma string: ");
    scanf("%[^\n]", str);
    getchar();
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    printf("String em maiusculas: %s\n", str);
}