//6. Escreva um programa em C para calcular a soma de todos os elementos em uma matriz usando ponteiros.
//A parte com // é para o codigo funcionar no vscode, mas caso queira rodar no codeblocks, tire as barras

#include <stdio.h>


void prencherVetor(int n, int vet[]){;
    for(int i = 0; i < n; i++){
        printf("Digite o valor do Elemento %d: ",i);
        scanf("%d",&vet[i]);
    }
}

int somaVetor(int n, int *ptr){
    int soma = 0;
    int aux = *ptr;
    for(int i = 0; i < n; i++){
        soma += aux;
        aux++;
    }
    return soma;
}

int main() {
    int n = 5;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    //int vet[];
    //prencherVetor(n, vet);
    //int *ptr = vet;
    //int soma = somaVetor(n,ptr);
    //printf("A soma do vetor é: %d\n", soma);
    return 0;
}

