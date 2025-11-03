/*9. Escreva um programa em C que leia um arquivo texto e substitua todas as letras minúsculas por maiúsculas, salvando o resultado em um novo arquivo chamado maiusculas.txt.*/

#include <stdio.h>

int main(){
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("Copia.txt", "r");
    fp2 = fopen("maiusculas.txt", "w");
    if(fp1 == NULL){
        printf("Erro ao abrir o arquivo de origem.\n");
        return 1;
    }
    if(fp2 == NULL){
        printf("Erro ao criar o arquivo de destino.\n");
        return 1;
    }
    printf("Arquivos abertos com sucesso.\n");
    while((ch = fgetc(fp1)) != EOF){
        if(ch >= 'a' && ch <= 'z'){
            ch -= 32;
        }
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Arquivos fechados com sucesso.\n");
}
