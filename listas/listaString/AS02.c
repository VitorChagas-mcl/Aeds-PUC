/*2. Crie um programa em C que leia um nome e exiba-o somente se a primeira letra for a letra ‘a‘
ou ‘A‘.*/

#include <stdio.h>

int main(){
    char nome[100];
    printf("Digite um nome: ");
    scanf("%[^\n]", nome);
    if(nome[0] == 'a' || nome[0] == 'A'){
        printf("Nome: %s\n", nome);
    }else{
        printf("O nome nao comeca com a letra 'a' ou 'A'. \n");
    }
}