//14. Escreva um programa em C para encontrar o maior elemento usando a Alocação de Memória Dinâmica.
//A parte com // é para o codigo funcionar no vscode, mas caso queira rodar no codeblocks, tire as barras

#include <stdio.h>

int main(){
    int n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    //int vet[n];
    for(int i = 0; i < n; i++){
        printf("Digite o valor do elemento %d: ", i);
        //scanf("%d", &vet[i]);
    }
    //int maiorElemento = vet[0];
    for(int i = 1; i < n; i++){
        //if(vet[i]>maiorElemento){
            //maiorElemento = vet[i];
        //}
    }
    //printf("O maior elemento eh: %d", maiorElemento);
}