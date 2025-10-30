/*8. Escreva um programa em C que leia um arquivo texto e crie outro arquivo contendo apenas as
linhas que não estão vazias (ou seja, eliminando linhas em branco).

#include <stdio.h>

int main(){
    FILE *fp = NULL;
    fp = fopen("arqOrg.txt", "r");
    FILE *fp2 = NULL;
    fp2 = fopen("arqSemEspaco.txt", "w");
    if(fp == NULL){
        printf("Nao foi possivel abrir o arquivo!\n");
        return 1;
    }
    char leitura[100];
    while(fgets(leitura,sizeof(leitura),fp)!=NULL){
        if(leitura != '\0'){
            fputs(leitura,fp2);
        }
    }
    fclose(fp);
    fclose(fp2);
}

*/