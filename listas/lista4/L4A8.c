#include <stdio.h>

/*
Fazer uma função que recebe um número inteiro n e retorna o seu fatorial¹. Além disso, você
deve fazer um procedimento exercicio08() para ler o valor de n e chamar a função desenvolvida
nesta questão
*/

int fatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fatorial(n - 1);
}

void exercicio08()
{
    int n;
    printf("Digite um numero para n: ");
    scanf("%d", &n);
    printf("O falor de fatorial eh: %d ", fatorial(n));
}

int main()
{
    exercicio08();
}