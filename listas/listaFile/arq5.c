/*5. Considere um arquivo texto que armazene números em ponto flutuante em cada uma de suas
linhas. Escreva um programa em C que determine o valor máximo, o valor mínimo e a média
desses valores armazenados no arquivo. Imprima esses valores na tela.*/

#include <stdio.h>

int main(){
    FILE *fp = NULL;
    fp = fopen("arq5.txt","r");
    if(fp == NULL){
        printf("Nao foi possivel abrir o arquivo!\n");
        return 1;
    }
    printf("Arquivo aberto!\n");
    char leitura[100];
    float maior = 0, menor = 100, soma = 0, num;
    int cont = 0;
    while(fscanf(fp,"%f,", &num) == 1){
        soma += num;
        cont++;
        if (num > maior)
            maior = num;
        if (num < menor)
            menor = num;
    }
    printf("O maior valor eh: %.2f\n", maior);
    printf("O menor valor eh: %.2f\n", menor);
    printf("A soma dos valores eh: %.2f\n", soma/cont);
    printf("Arquivo fechado!\n");
    fclose(fp);
}