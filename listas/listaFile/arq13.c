/*13. Escreva um programa em C que leia um arquivo texto e gere outro arquivo contendo apenas os
números presentes no texto original (ignorando os demais caracteres).
2
*/

#include <stdio.h>

int main(){
    FILE *fp, *fp2;
    char ch;
    fp = fopen("arqOrg.txt", "r");
    fp2 = fopen("arquivoNumerico.txt", "w");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo de origem.\n");
        return 1;
    }
    if(fp == NULL){
        printf("Erro ao abrir o arquivo de origem.\n");
        return 1;
    }
    printf("Arquivo aberto com sucesso.\n");
    while((ch = fgetc(fp)) != EOF){
        if(ch >= '0' && ch <= '9'){
            fputc(ch, fp2);
        }
    }
    fclose(fp);
    fclose(fp2);
}