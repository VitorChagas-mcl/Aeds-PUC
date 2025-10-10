// 1. Crie umprograma que lê 6 valores inteiros utilizando um vetore e, em seguida, mostre na tela os valores lidos.

#include <stdio.h>

int main()
{
    int valores[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &valores[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Os valores na posicao %d eh %d\n", i + 1, valores[i]);
    }
}