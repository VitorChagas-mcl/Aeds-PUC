/*11. Escreva um programa em C que leia um arquivo texto e determine quantas vogais e consoantes
existem no total.*/
#include <stdio.h>

int vogal(char ch){
    char vogais[] = "aeiouAEIOU";
    for(int i = 0; vogais[i] != '\0'; i++){
        if(ch == vogais[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    FILE *fp;
    int vogais = 0, consoantes = 0;
    char ch;
    fp = fopen("Copia.txt", "r");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo de origem.\n");
        return 1;
    }
    printf("Arquivos abertos com sucesso.\n");
    while((ch = fgetc(fp)) != EOF){
        if(ch >= 'a' && ch <= 'z'){
            if(vogal(ch)){
                vogais++;
            }else{
                consoantes++;
            }
        }
    }
    fclose(fp);
    printf("Arquivos fechados com sucesso.\n");
    printf("Total de vogais: %d\n", vogais);
    printf("Total de consoante: %d\n", consoantes);
}