/*8. Escreva um programa em C que leia um arquivo texto e crie outro arquivo contendo apenas as
linhas que não estão vazias (ou seja, eliminando linhas em branco).*/

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
    if(fp2 == NULL){
        printf("Nao foi possivel abrir o arquivo!\n");
        return 1;
    }
    printf("Arquivo aberto!\n");
    char leitura[100];
    while(fgets(leitura,sizeof(leitura),fp)!=NULL){
        int i = 0;
        while (leitura[i] != '\0')
        {
            if(leitura[i] == ' ' || leitura[i] == '\n'|| leitura[i] == '\t'){
                fputs(leitura,fp2);
            }
            i++;
        }
    }
    printf("Arquivo sem espaco e fechado!\n");
    fclose(fp);
    fclose(fp2);
}