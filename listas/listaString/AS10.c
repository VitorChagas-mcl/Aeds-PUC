/*10. Crie um programa em C que leia uma string e a exiba na tela de forma invertida (de trás para
frente).*/
#include <stdio.h>

void inverterString(char *str, int inicio, int fim)
{
    if (inicio >= fim)
    {
        return;
    }
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inverterString(str, inicio+1, fim-1);
}

int main()
{
    char str[100];
    printf("Digite uma palavra: ");
    scanf("%[^\n]", str);
    getchar();
    printf("String original: %s\n", str);
    int fim = 0;
    while (str[fim] != '\0')
        fim++;
    inverterString(str, 0, fim - 1);
    printf("String invertida: %s\n", str);
}