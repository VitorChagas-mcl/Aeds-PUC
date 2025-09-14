#include <stdio.h>
#include <math.h>
/*Fazer uma função que recebe um número inteiro n, um número real x e retorna o n-ésimo termo
da sequência abaixo. Utilize as funções desenvolvidas anteriormente. Além disso, você deve
fazer um procedimento exercicio09() para ler o valor de n e chamar a função desenvolvida nesta
questão.
2x/3! , 4x²/5! , 6x³7! ...
Observação: A partir deste ponto, sempre que possível, utilize funções desenvolvidas
anteriormente.
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

void exercicio09()
{
    int n;double x;
    printf("Digite um numero para n e x: ");
    scanf("%d %lf", &n, &x);
    printf("O n-termo eh: %.2lf", parSobreImpar(n,x));
}

int main()
{
    exercicio09();
}

