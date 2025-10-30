/*
3. Escreva um programa em C que abra um arquivo texto e que conte a quantidade de caracteres
armazenados nele. Imprima o número na tela. O programa deve solicitar ao usuário que digite
o nome do arquivo.
*/

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
/*
3. Escreva um programa em C que abra um arquivo texto e que conte a quantidade de caracteres
armazenados nele. Imprima o número na tela. O programa deve solicitar ao usuário que digite
o nome do arquivo.
*/
int main()
{
    // ARQUIVO EXEMPLO: arqOrg.txt
    char nome[50];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);
    FILE *fp = fopen(nome, "r");
    char leitura;
    int cout = 0;
    if (fp == NULL)
    {
        printf("Nao foi possivel abri o arquivo\n");
        return 1;
    }
    else
    {
        while ((leitura = fgetc(fp)) != EOF)
        {
            cout++;
        }
    }
    printf("Exite %d caracter no arquivo\n", cout);
    fclose(fp);
}