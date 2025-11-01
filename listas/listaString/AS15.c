/*15. Crie um programa em C que leia uma string e conte o número de palavras presentes nela.
Considere que as palavras são separadas por espaços em branco.*/

#include <stdio.h>

int main(){
    char str[100];
    int cont = 0, flag = 0;
    printf("Digite uma string: ");
    scanf("%[^\n]", str);
    getchar();
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            if(flag == 0){
                cont++;
                flag = 1;
            }
        }else{
            flag = 0;
        }
    }
    printf("Numero de palavras: %d\n", cont);
}