/*6. Escreva um programa em C que leia um arquivo texto e gere outro arquivo chamado invertido.txt,
contendo as mesmas linhas do arquivo original, porém na ordem inversa (da última para a primeira).*/

#include <stdio.h>

int main(){
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    char nome[100];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);
    fflush(stdin);
    fp1 = fopen(nome, "r");
    fp2 = fopen("invertido.txt", "w");
    if(fp1 == NULL){
        printf("Aquivo nao foi aberto!\n");
        return 1;
    }
    if(fp2 == NULL){
        printf("Aquivo nao foi aberto!\n");
        return 1;
    }
    printf("Aquivo foi aberto!\n");
    
    char leitura[100][100];
    int cont = 0;
    while(fgets(leitura[cont],sizeof(leitura[cont]), fp1)!=NULL){
        leitura[cont][strcspn(leitura[cont], "\n")] = '\0';
        cont++;
    }

    for(int i = cont - 1; i >= 0; i--){
        fprintf(fp2,"%s", leitura[i]);
    }

    printf("Arquivo 'invertido.txt' criado com sucesso!\n");
    printf("Arquivo fechado com sucesso!\n");
    fclose(fp1);
    fclose(fp2);
}