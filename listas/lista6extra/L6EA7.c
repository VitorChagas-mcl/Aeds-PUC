//7. Escreva um programa em C para imprimir os elementos de um vetor na ordem inversa.

//A parte com // é para o codigo funcionar no vscode, mas caso queira rodar no codeblocks, tire as barras

#include <stdio.h>

void prencherVetor(int n, int vet[])
{
    ;
    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor do Elemento %d: ", i);
        scanf("%d", &vet[i]);
    }
}
void imprimirVetor(int n, int vet[])
{
    printf("Os elementos da matriz na ordem inversa são:");
    for (int i = 0; n>i; i++)
    {
        printf("Elemento - %d : %d\n", n - 1 - i, vet[n - 1 - i]);
    }
}

int main()
{
    int num;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &num);
    //int vet[];
    //prencherVetor(num, vet);
    //imprimirVetor(num, vet);
    return 0;
}
