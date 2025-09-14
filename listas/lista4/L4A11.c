#include <stdio.h>
#include <math.h>

/*
Refazer a função da questão anterior, omitindo todos os termos cujos valores no denominador
sejam múltiplos de 2. Além disso, você deve fazer um procedimento exercicioXX() para chamar
a função desenvolvida nesta questão.
*/

int fatorial(int n)
{
    int fat = 1;
    for (int i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}

int par(int n)
{
    return n * 2;
}

double parSobreImpar(int n, double x)
{
    return (par(n) * pow(x, n)) / fatorial(2 * n + 1);
}

double somatorio(int n, double x)
{
    double soma = 0;
    for (int i = 1; i <= n; i++)
    {
        soma += parSobreImpar(i, x);
    }
    return soma;
}

void exercicio011()
{
    int n;
    double x;
    printf("Digite um numero para n e x: ");
    scanf("%d %lf", &n, &x);
    printf("O n-termo eh: %.6lf", parSobreImpar(n, x));
}

int main()
{
    exercicio011();
}