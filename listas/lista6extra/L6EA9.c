//9. Escreva um programa em C para contar o número de vogais e consoantes em uma string usando um ponteiro.
    
#include <stdio.h>

void contarLetra(char* palavra, int* ptrV, int* ptrC) {
    if (*palavra == '\0') {
        return;
    }
    if(*palavra == 'a' || *palavra == 'A'|| *palavra == 'e'|| *palavra == 'E'|| *palavra == 'i'|| *palavra == 'I'|| *palavra == 'o'|| *palavra == 'O'|| *palavra == 'u'|| *palavra == 'U')
    (*ptrV)++;
    else if((*palavra >= 'a' && *palavra <= 'z') || (*palavra >= 'A' && *palavra <= 'Z')) (*ptrC)++;
    contarLetra(palavra + 1, ptrV, ptrC);
}

int main() {
    char palavra[30];
    int vogal = 0, cons = 0;
    int* vog = &vogal;
    int* con = &cons;
    printf("Digite uma palavra ou frase: ");
    scanf("%s", palavra);
    char* ptr = palavra;
    contarLetra(ptr, vog, con);
    printf("Numero de vogal : %d\nNumero de consoantes: %d", vogal, cons);
    return 0;
}

