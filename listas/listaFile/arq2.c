#include <stdio.h>
#include <string.h>
//2. Escreva um programa em C para contar a quantidade de palavras de um arquivo texto.
int main(){
    //ARQUIVO EXEMPLO
    FILE *fp = fopen("arqOrg.txt", "r");
    char leitura[100];
    int cout = 0;
    if(fp == NULL){
        printf("Nao foi possivel abri o arquivo\n");
        return 1;
    }else{
        while(fgets(leitura,sizeof(leitura), fp)){
            char *palavra = strtok(leitura, " .;:-\n\t");
            while(palavra != NULL){
                cout++;
                palavra = strtok(NULL, " .;:-\n\t");
            }
        }
    }
    printf("Exite %d palavras no arquivo\n", cout);
    fclose(fp); 
}