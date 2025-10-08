//4. Escreva um programa em C para imprimir todos o alfabeto usando um ponteiro.

#include <stdio.h>

void imprimirAlfaberto(){
    char alfabeto[26];
    char* ptr;
    for(int i = 0; i < 26; i++){
        alfabeto[i] = 'A' + i;
    }
    for(int i = 0; i < 26; i++){
        printf("%c ",alfabeto[i]);
    }
}

int main() {
    imprimirAlfaberto();
    return 0;
}
