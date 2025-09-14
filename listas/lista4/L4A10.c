#include <stdio.h>
#include <math.h>
/*Fazer uma função que recebe um número inteiro n, um número real x e retorna o somatório dos
n primeiros termos da sequência mostrada na questão anterior. Além disso, você deve fazer um
procedimento exercicioXX() para chamar a função desenvolvida nesta questão.
*/

int fatorial(int n){
    int fat = 1;
    for(int i = 1; i <= n; i++){
        fat *= i;
    }
    return fat;
}

int par(int n)
{
    return n * 2;
}

double parSobreImpar(int n, double x){
    return (par(n) * pow(x,n)) / fatorial(2 * n + 1);
}

double somatorio(int n, double x){
    double soma = 0;
    for(int i = 1; i <= n; i++){
        soma += parSobreImpar(i,x);
    }
    return soma;
}

void exercicio010()
{
    int n;double x;
    printf("Digite um numero para n e x: ");
    scanf("%d %lf", &n, &x);
    printf("O a soma dos valores eh eh: %.6lf", somatorio(n,x));
}

int main()
{
    exercicio010();
}
