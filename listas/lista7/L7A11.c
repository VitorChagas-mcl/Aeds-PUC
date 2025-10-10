/*
11. Faça um programa que leia um vetor de 5 posições para números reais e, depois, um código
inteiro. Se o código for:
• 0: finalize o programa;
• 1: mostre o vetor na ordem direta;
• 2: mostre o vetor na ordem inversa.
Caso o código seja diferente de 1 e 2, escreva uma mensagem informando que o código é inválido.
*/

#include <stdio.h>

void ordemDireta(float *vetor){
    for(int i = 0; i < 5; i++){
        printf("O valor na posicao %d eh %.2f\n", i + 1, vetor[i]);
    }
}

void ordemInversa(float *vetor){
    for(int i = 0; i < 5; i++){
        printf("O valor na posicao %d eh %.2f\n", 5 - i, vetor[5 - 1 - i]);
    }
}

int main(){
    float vetor[5];
    int op;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]); 
    }
    printf("Digite uma opcao(1 OU 2):\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Ordem Direta:\n");
        ordemDireta(vetor);
        break;

    case 2:
        printf("Ordem inversa:\n");
        ordemInversa(vetor);
        break;

    default:
        printf("Opcao invalido\n");
        break;
    }
}