//1. Escreva um programa em C para demonstrar como lidar com os ponteiros do programa

#include <stdio.h>

int main(){
    int m;
    printf("Digite um numero inteiro: ");
    scanf("%d", &m);
    int *ab = &m;
    printf("O endereco de m: %p\n", &m);
    printf("Valor de m: %d\n", m);
    printf("Agora ab é atribuído com o endereço de m.\n");
    printf("O endereco de ab: %p\n", &ab);
    printf("Valor de ab: %d\n", *ab);
}