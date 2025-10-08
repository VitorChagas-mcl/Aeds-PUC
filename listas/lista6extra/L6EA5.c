// 5. Escreva um programa em C para armazenar n elementos em um vetor e imprimir os elementos
// usando um ponteiro.

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
    printf("Os elementos que você inseriu são:");
    for (int i = 0; i < n; i++)
    {
        printf("Elemento - %d : %d\n", i, vet[i]);
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
