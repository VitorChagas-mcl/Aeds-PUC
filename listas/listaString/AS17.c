/*17. Crie um programa em C que leia uma string e converta todas as letras maiúsculas para minúsculas,sem utilizar a função strlwr.
*/
#include <stdio.h>

int main(){
    char str[100];
    printf("Digite uma string: ");
    scanf("%[^\n]", str);
    getchar();
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    printf("String em minusculas: %s\n", str);
}