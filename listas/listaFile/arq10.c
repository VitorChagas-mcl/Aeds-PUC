#include <stdio.h>
#include <string.h>

/*10. Escreva um programa em C que leia um arquivo texto e conte quantas vezes uma determinada
palavra, informada pelo usuário, aparece no arquivo.*/

int main(){
    FILE *fp;
    char palavra[100], linha[1000];
    int cont = 0;
    fp = fopen("Copia.txt", "r");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    printf("Digite a palavra a ser encontrada: ");
    scanf("%s", palavra);
    while (fgets(linha, sizeof(linha), fp) != NULL)
    {
        char *ptr = linha;
        while((ptr = strstr(ptr, palavra)) != NULL){
            cont++;
            ptr += strlen(palavra);
        }
    }
    fclose(fp);
    printf("A palavra '%s', apareceu %d vezes no arquivo.\n", palavra, cont);
}