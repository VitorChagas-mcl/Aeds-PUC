#include <stdio.h>
/*
Fazer uma função double somaUmSobreImpar(int n) que recebe um número inteiro n e retorna o
valor do somatório dos n primeiros termos da sequência anterior. A sua função somaUmSobreIm-
par deve utilizar a função umSobreImpar desenvolvida na questão anterior. Além disso, você deve
fazer um procedimento exercicio04() para ler o valor de n e chamar a função desenvolvida nesta
questão.
*/
double umSobreImpar(int n)
{
    return 1.0 / (2 * n + 1);
}

double somaUmSobreImpar(int n)
{
    double soma = 0.0;
    for (int i = 1; i <= n; i++)
    {
        soma += umSobreImpar(i);
    }
    return soma;
}

void exercicio04()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("O valor da soma eh: %.2lf", somaUmSobreImpar(n));
}

int main()
{
    exercicio04();
}