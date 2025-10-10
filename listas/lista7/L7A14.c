/*
14. Escreva um programa que leia números inteiros no intervalo [0, 50] e os armazene em um vetor
com 10 posições. Preencha um segundo vetor apenas com os números ímpares do primeiro vetor.
Imprima os dois vetores, exibindo 2 elementos por linha.
*/

#include <stdio.h>

int main()
{
    int vet[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }
    int cont = 0;
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] % 2 != 0)
        {
            cont++;
        }
    }
    //int vetimpar[cont];
    for (int j = 0; j < cont; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (vet[i] % 2 != 0)
            {
                //vetimpar[j] = vet[i];
            }
        }
    }
    printf("Vetor original:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    printf("\nVetor com numeros impares:\n");
    for(int i = 0; i < cont; i++){
        //printf("%d ", vetimpar[i]);
    }
}