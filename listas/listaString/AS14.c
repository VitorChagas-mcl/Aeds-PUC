/*14. Crie um programa em C que leia uma string e substitua todas as ocorrências de um caractere
específico por outro caractere fornecido pelo usuário.*/

#include <stdio.h>

int main(){
    char str[100];
    char sub, target;
    printf("Digite uma string: ");
    scanf("%[^\n]", str);
    getchar();
    printf("Digite o caractere a ser substituido: ");
    scanf("%c", &target);
    getchar();
    printf("Digite o novo caractere: ");
    scanf("%c", &sub);
    getchar();
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == target){
            str[i] = sub;
        }
    }
    printf("String modificada: %s\n", str);
    return;
}