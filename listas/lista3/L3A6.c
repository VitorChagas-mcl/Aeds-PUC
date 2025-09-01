/*
6. Faça um programa para ler uma mensagem do teclado e criptografá-la utilizando o ciframento de
César. Nesse caso, cada caractere da mensagem deve ser substituído pelo caractere cujo código
ASCII é igual ao seu mais uma constante K (lida do teclado).
*/
//Ainda estou tentando fazer ela, mas esta ai pronta
#include <stdio.h>

int main(){
    char mensagem[100];
    int k;
    printf("Digite sua mesagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    printf("Digite o valor da constante: \n");
    scanf("%d", &k);

    for(int i = 0; mensagem[i] != '\0'; i++){
        if( mensagem[i] == 'x' || mensagem[i] == 'X' ||mensagem[i] == 'y' || mensagem[i] == 'z' || mensagem[i] == 'Y' || mensagem[i] == 'Z'){
            mensagem[i] -= 23;
        }else if(mensagem[i] >= 'a' && mensagem[i] <= 'z'){
            mensagem[i] +=k;
        }else if(mensagem[i] >= 'A' && mensagem[i] <= 'Z'){
            mensagem[i] +=k;
        }
    }
    for(int i = 0; mensagem[i] != '\0'; i++){
        printf("%c", mensagem[i]);
    } 
}
