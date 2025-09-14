#include <stdio.h>
#include <math.h>
/*
Fazer a função que recebe um número inteiro n, um número real x e retorna o n-ésimo termo
da sequência abaixo. Utilize a função desenvolvida na letra a da questão anterior. Além disso,
você deve fazer um procedimento exercicio06() para ler os valores de n e de x, e chamar a função
desenvolvida nesta questão.
2x¹/3 , 4x²/5 , 6x³/7...
*/

double umSobreImpar(int n)
{
    return 1.0 / (2 * n + 1);
}

int par(int n)
{
    return n * 2;
}

double parSobreImpar(int n, double x){
    return (par(n) * pow(x,n)) * umSobreImpar(n);
}

void exercicio06()
{
    int n;double x;
    printf("Digite um numero para n e x: ");
    scanf("%d %lf", &n, &x);
    printf("O n-termo eh: %.2lf", parSobreImpar(n,x));
}

int main()
{
    exercicio06();
}