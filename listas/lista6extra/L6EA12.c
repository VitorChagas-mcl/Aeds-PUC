//12. Escreva um programa em C para ordenar um array usando ponteiro.
//A parte com // é para o codigo funcionar no vscode, mas caso queira rodar no codeblocks, tire as barras
void ordenar(int* ptr, int a){
    int aux;
    for(int i = 0; i < a; i++){
        for (int j = 0; j < a - 1 - i; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                aux = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = aux;
            }
        }
    }
}

#include <stdio.h>

int main(){
    int a;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    /*
    int vetor[a];
    for(int i = 0; i < a;i++){
        printf("Digite um valor pra posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    int *ptr = vetor;
    ordenar(ptr,a);
    for(int i = 0; i < a;i++){
        printf("%d\n", vetor[i]);
    }
    */
}