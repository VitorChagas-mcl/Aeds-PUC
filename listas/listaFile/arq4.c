/*4. Escreva um programa em C que solicite ao usuário a digitação do nome de um arquivo texto já
existente, e que então gere um outro arquivo, que será uma cópia do primeiro.*/

#include <stdio.h>

int main()
{
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    char nome[50];
    char leitura[100];
    printf("Digite o nome do arquivo de origem (ex: texto.txt): ");
    scanf("%s", nome);
    getchar();
    fp1 = fopen(nome, "r");
    fp2 = fopen("Copia.txt", "w");
    if (fp1 == NULL)
    {
        printf("Nao foi possivel abrir o arquivo original!\n");
        return 1;
    }
    if (fp2 == NULL)
    {
        printf("Nao foi possivel abrir o arquivo copia!\n");
        return 1;
    }

    printf("Arquivo aberto!\n");

    while (fgets(leitura, sizeof(leitura), fp1))
    {
        fputs(leitura, fp2);
    }

    printf("Copia concluída com sucesso!\n");

    fclose(fp1);
    fclose(fp2);
}