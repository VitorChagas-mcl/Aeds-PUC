/*
6. Faça um programa para ler uma mensagem do teclado e criptografá-la utilizando o ciframento de
César. Nesse caso, cada caractere da mensagem deve ser substituído pelo caractere cujo código
ASCII é igual ao seu mais uma constante K (lida do teclado).
*/
/*
resolução completa
Vamos entender passo a passo o que acontece:
Suponha que mensagem[i] = 'C' e k = 3.
mensagem[i] - 'A'
'C' tem valor ASCII 67
'A' tem valor ASCII 65
Então: 67 - 65 = 2
Isso significa que 'C' é a 2ª letra após A (ou índice 2 no alfabeto começando em 0).
(mensagem[i] - 'A' + k)
2 + 3 = 5
Agora temos o deslocamento.
% 26
Garante que, se passar do 'Z', volte pro começo do alfabeto.
Exemplo: 'Z' - 'A' = 25, somando 3 dá 28.
28 % 26 = 2 → que corresponde à letra 'C'.
+ 'A'
Converte de volta para a tabela ASCII.
Se o resultado foi 5, então 5 + 65 = 70, que é 'F'.
*/
#include <stdio.h>

int main(){
    char mensagem[100];
    int k;
    printf("Digite sua mesagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    printf("Digite o valor da constante: \n");
    scanf("%d", &k);

    for(int i = 0; mensagem[i] != '\0'; i++){
        if(mensagem[i] >= 'A' && mensagem[i] <= 'Z'){
            mensagem[i] = ((mensagem[i] - 'A' + k) % 26) + 'A';
        }
        else if(mensagem[i] >= 'a' && mensagem[i] <= 'z'){
            mensagem[i] = ((mensagem[i] - 'a' + k) % 26) + 'a';
        }
    }
    for(int i = 0; mensagem[i] != '\0'; i++){
        printf("%c", mensagem[i]);
    } 
}
