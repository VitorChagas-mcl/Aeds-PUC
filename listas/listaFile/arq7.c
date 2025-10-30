/*7. Escreva um programa em C que solicite o nome de dois arquivos texto e gere um terceiro arquivo
chamado intercalado.txt, contendo alternadamente uma linha de cada um dos arquivos de
entrada.*/

#include <stdio.h>

int main(){
    char nome1[100];
    char leitura1[100];
    char nome2[100];
    char leitura2[100];
    FILE* fp1 = fopen("text1.txt", "r");
    FILE* fp2 = fopen("text2.txt", "r");
    FILE* fp3 = fopen("intercalar.txt", "w+");
    if(fp1 == NULL || fp2 == NULL || fp3 == NULL){
        printf("Nao foi possivel abri o arquivo\n");
        return 1;
    }else{
        while(!feof(fp1) && !feof(fp2)){
            fgets(leitura1,100,fp1);
            fputs(leitura1,fp3);
            fgets(leitura2,100,fp2);
            fputs(leitura2,fp3);
        }
        while(!feof(fp1)){
            fgets(leitura1,100,fp1);
            fputs(leitura1,fp3);
        }
        while(!feof(fp2)){
            fgets(leitura2,100,fp2);
            fputs(leitura2,fp3);
        }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    }
}