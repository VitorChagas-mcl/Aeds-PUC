/*12. Escreva um programa em C que leia um arquivo texto e calcule quantas palavras começam com
letra maiúscula.*/

#include <stdio.h>

int main(){
    FILE *fp;
    char ch;
    int cont = 0,LM = 0;
    fp = fopen("Copia.txt", "r");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo de origem.\n");
        return 1;
    }
    printf("Arquivo aberto com sucesso.\n");
    while((ch = fgetc(fp)) != EOF){
        if(ch >= 'A' && ch <= 'Z' && (LM == 0)){
            cont++;
            LM = 1;
        }else{
            if(ch == ' ' || ch == '\n' || ch == '\t'){
                LM = 0;
            }
        }
    }
    fclose(fp);
    printf("Arquivo fechado com sucessos.\n");
    printf("Total de palavras que comecam com a letra maiuscula: %d\n", cont);
}