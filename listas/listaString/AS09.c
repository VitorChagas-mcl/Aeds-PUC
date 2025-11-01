/*9. Crie um programa em C que leia uma palavra e conte quantas vogais (a, e, i, o, u) ela possui.
Em seguida, leia um caractere (vogal ou consoante) e substitua todas as vogais da palavra por
esse caractere.*/

#include <stdio.h>

int contarVogais(char *str){
if (*str == 'a' || *str == 'A' ||
        *str == 'e' || *str == 'E' ||
        *str == 'i' || *str == 'I' ||
        *str == 'o' || *str == 'O' ||
        *str == 'u' || *str == 'U')
        return contarVogais(++str) + 1;
    else if (*str == '\0')
        return 0;
    else
        return contarVogais(++str);
}

void trocarVogais(char *str, char escolha){
    if(*str == '\0'){
        return;
    }else if (*str == 'a' || *str == 'A' ||
        *str == 'e' || *str == 'E' ||
        *str == 'i' || *str == 'I' ||
        *str == 'o' || *str == 'O' ||
        *str == 'u' || *str == 'U'){
            *str = escolha;
    }
    trocarVogais(++str, escolha);
}

int main(){
    int totalVogais = 0;
    char str[100];
    char escolha;
    printf("Digite uma palavra: ");
    scanf("%[^\n]", str);
    getchar();
    printf("Digite um caractere para substituir as vogais(Vogais ou consoante): ");
    scanf("%c", &escolha);
    trocarVogais(str, escolha);
    totalVogais = contarVogais(str);
    printf("Total de vogais: %d\n", totalVogais);
    printf("Palavra modificada: %s\n", str);
}