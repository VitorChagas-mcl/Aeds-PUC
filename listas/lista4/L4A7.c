#include <stdio.h>
#include <math.h>
/*
Fazer uma função que recebe um número inteiro n, um real x e retorna o produto dos n primeiros
termos da sequência acima. Utilize a função desenvolvida na questão anterior. Além disso, você
deve fazer um procedimento exercicio07() para ler os valores de n e de x, e chamar a função
desenvolvida nesta questão
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

double produtoParSobreImpar(int n, double x){
    double produto = 1.0;
    for(int i = 1; i <= n; i++){
        produto *= parSobreImpar(i,x);
    }
    return produto;
}
void exercicio07()
{
    int n; double x;
    printf("Digite um numero para n e x: ");
    scanf("%d %lf", &n, &x);
    printf("O n-termo eh: %.2lf", produtoParSobreImpar(n,x));
}

int main()
{
    exercicio07();
}
