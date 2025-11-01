/*11. Crie um programa em C que leia uma string e verifique se ela é um palíndromo ? ou seja, se pode
ser lida da mesma forma da esquerda para a direita e da direita para a esquerda (por exemplo:
osso, arara, reviver).*/

#include <stdio.h>

int palindro(char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[100];
    printf("Digite uma palavra: ");
    scanf("%[^\n]", str);
    getchar();
    if(palindro(str)){
        printf("A palavra %s eh um palindromo.\n", str);
    }else{
        printf("A palavra %s nao eh um palindromo.\n", str);
    }
}