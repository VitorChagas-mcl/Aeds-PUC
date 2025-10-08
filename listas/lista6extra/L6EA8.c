//8. Escreva um programa em C para imprimir uma string ao contrário usando um ponteiro.
    
#include <stdio.h>

void imprimirInverso(char* palavra) {
    if (*palavra == '\0') {
        return;
    }
    imprimirInverso(palavra + 1);
    printf("%c", *palavra);       
}

int main() {
    char palavra[30];
    printf("Digite uma palavra ou frase: ");
    scanf("%s", palavra);
    char* ptr = palavra;
    imprimirInverso(ptr);
    return 0;
}

