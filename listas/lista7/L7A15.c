/*15. Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada.
Crie um novo vetor denominado C, calculando C = A − B. Mostre na tela os dados do vetor C.
*/

#include <stdio.h>

#define TAM 10

int main(){
    int a[TAM], b[TAM], c[TAM];
    for(int i = 0; i < TAM; i++){
        printf("Digite o valor %d do vetor A: ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < TAM; i++){
        printf("Digite o valor %d do vetor B: ", i);
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < TAM; i++){
        c[i] = a[i] - b[i];
    }
    printf("Vetor C (A - B):\n");
    for(int i = 0; i < TAM; i++){
        printf("C[%d] = %d\n", i, c[i]);
    }
}