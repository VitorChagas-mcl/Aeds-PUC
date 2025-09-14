#include <stdio.h>

/*
1. Fazer uma função int par(int n) que recebe um número inteiro n e retorna o n-ésimo termo da
sequência 2, 4, 6, 8, 10, 12.... Além disso, você deve fazer um procedimento exercicio01() para ler
o valor de n e chamar a função desenvolvida nesta questão.
*/

int par(int n)
{
    return n * 2;
}

void exercicio01()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("O %d termo da sequencia eh: %d\n", n, par(n));
}

int main()
{
    exercicio01();
}