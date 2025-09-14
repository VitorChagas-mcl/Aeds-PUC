#include <stdio.h>

/*
Fazer uma função que recebe um número inteiro n e retorna o seu fatorial¹. Além disso, você
deve fazer um procedimento exercicio08() para ler o valor de n e chamar a função desenvolvida
nesta questão
*/

int fatorial(int n){
    int fat = 1;
    for(int i = 1; i <= n; i++){
        fat *= i;
    }
    return fat;
}

void exercicio08()
{
    int n;
    printf("Digite um numero para n: ");
    scanf("%d", &n);
    printf("O valor de fatorial eh: %d ", fatorial(n));
}

int main()
{
    exercicio08();
}