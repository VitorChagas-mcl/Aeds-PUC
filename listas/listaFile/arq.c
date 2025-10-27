#include <stdio.h>
#include <string.h>

/*
1. Suponha que temos dois arquivos cujo as linhas são ordenadas lexigraficamente. Por exemplo,
estes arquivos podem conter nomes de pessoas, linha a linha, em ordem alfabética. Escreva um
programa que receba, por linha de comando, os nomes destes dois arquivos e de um terceiro. Crie
este terceiro arquivo contendo todas as linhas destes dois arquivos ordenadas lexicograficamente.
Arquivo 1:
Antonio
Berenice
Diana
Solange
Sonia
Zuleica
Arquivo 2:
Carlos
Celia
Fabio
Henrique
Arquivo resultante:
Antonio
Berenice
Carlos
Celia
Diana
Fabio
Henrique
Solange
Sonia
Zuleica
*/

int main()
{
    FILE *fp;
    FILE *fp1;
    FILE *fp2;
    fp1 = fopen("arq1.txt", "r");
    fp2 = fopen("arq2.txt", "r");
    fp = fopen("arqOrg.txt", "w");
    if (fp1 == NULL)
    {
        printf("Erro ao abrir o arquivo arq1.txt\n");
        return 1;
    }
    if (fp2 == NULL)
    {
        printf("Erro ao abrir o arquivo arq2.txt\n");
        return 1;
    }
    if (fp == NULL)
    {
        printf("Erro ao abrir o arquivo arqOrg.txt\n");
        return 1;
    }
    printf("Arquivos abertos com sucesso!\n");
    char linha1[100], linha2[100];
    char *pt1 = NULL;
    char *pt2 = NULL;
    pt1 = fgets(linha1, sizeof(linha1), fp1);
    pt2 = fgets(linha2, sizeof(linha2), fp2);
    while (pt1 != NULL && pt2 != NULL)
    {
        if (strcmp(linha1, linha2) < 0)
        {
            fputs(linha1, fp);
            pt1 = fgets(linha1, sizeof(linha1), fp1);
        }
        else
        {
            fputs(linha2, fp);
            pt2 = fgets(linha2, sizeof(linha2), fp2);
        }
    }
    fprintf(fp, "\n");
    while (pt1 != NULL)
    {
        fputs(linha1, fp);
        pt1 = fgets(linha1, sizeof(linha1), fp1);
    }
    while (pt2 != NULL)
    {
        fputs(linha2, fp);
        pt2 = fgets(linha2, sizeof(linha2), fp2);
    }
    printf("Arquivos mesclados com sucesso!\n");
    fclose(fp1);
    fclose(fp2);
    fclose(fp);
}