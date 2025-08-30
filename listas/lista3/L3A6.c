/*
6. Faça um programa para ler uma mensagem do teclado e criptografá-la utilizando o ciframento de
César. Nesse caso, cada caractere da mensagem deve ser substituído pelo caractere cujo código
ASCII é igual ao seu mais uma constante K (lida do teclado).
*/

#include <stdio.h>

int main(){
    char mensagem[100];
    printf("Digite sua mesagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    for(int i = 0; mensagem[i] != '\0'; i++){
        if(mensagem[i] >= 'a' && mensagem[i] <= 'z'){
            mensagem[i] += 3;
        }else if(mensagem[i] >= 'A' && mensagem[i] <= 'Z'){
            mensagem[i] += 3;
        }
    }
    for(int i = 0; mensagem[i] != '\0'; i++){
        printf("%c", mensagem[i]);
    } 
}