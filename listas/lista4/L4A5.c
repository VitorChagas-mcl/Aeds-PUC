#include <stdio.h>

/*
Fazer:
(a) Uma função double parSobreImpar(int n) que recebe um número inteiro n e retorna o n-
ésimo termo da sequência 2/3 , 4/5 , 6/7 , 8/9 , 10/11 , .... A sua função deve utilizar os funções par e
umSobreImpar desenvolvidas anteriormente.
(b) Uma função double somaParSobreImpar(int n) que recebe um número inteiro n e retorna o
valor do somatório dos n primeiros termos da sequência anterior. A sua função somaParSo-
breImpar deve utilizar a função parSobreImpar.
(c) Um procedimento exercicio05() para ler o valor de n e chamar as funções desenvolvidas
nesta questão.
*/
double umSobreImpar(int n)
{
    return 1.0 / (2 * n + 1);
}

int par(int n)
{
    return n * 2;
}

double parSobreImpar(int n){
    return par(n) * umSobreImpar(n);
}

double somaParSobreImpar(int n)
{
    double soma = 0;
    for(int i = 1; i <= n; i++){
        soma += parSobreImpar(i);
    }
    return soma;
}
void exercicio05()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("O valor da soma eh: %.2lf", somaParSobreImpar(n));
}

int main()
{
    exercicio05();
}