/*
18. Escreva const char* encontra_primeiro_digito(const char *s); que retorne um ponteiro
para o primeiro dígito em s (ou NULL se não houver). Mostre o caractere e sua posição calculada
via ponteiros.
*/

#include <stdio.h>

char* encontra_primeiro_digito(const char *s){
    for(int i = 0; *(s + i) != '\0'; i++){
        if(*(s + i) >= '0' && *(s + i)<= '9'){
            return (char*)(s + i);
        }
    }
    return NULL;
}

int main(){
    char str[100];
    printf("Digite uma frase: ");
    scanf("%[^\n]s", str);
    char* ptr = encontra_primeiro_digito(str);
    if(ptr != NULL){
        printf("O primeiro digito eh: %c\n", *ptr);
        printf("A posicao do digito eh: %ld\n", ptr - str);
    }else{
        printf("Nao ha digitos na frase\n");
    }
}