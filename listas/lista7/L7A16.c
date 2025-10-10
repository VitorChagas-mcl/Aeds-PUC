/*
16. Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas posições
pares, os valores do primeiro vetor e, nas posições ímpares, os valores do segundo vetor.*/

#include <stdio.h>

#define TAM 10

int main()
{
    int a[TAM], b[TAM], c[TAM*2];
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o valor %d do vetor A: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o valor %d do vetor B: ", i);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < TAM * 2; i++)
    {
        if (i % 2 == 0)
        {
            c[i] = a[i / 2];
        }
        else
        {
            c[i] = b[i / 2];
        }
    }
    for (int i = 0; i < TAM * 2; i++)
    {
        printf("Vetor de c[%d]: %d\n", i, c[i]);
    }
}