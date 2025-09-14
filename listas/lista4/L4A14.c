#include <stdio.h>

/*
Fazer uma função que recebe um número inteiro n e retorna o maior elemento da sequência de
Fibonacci que seja menor que n. Além disso, você deve fazer um procedimento exercicioXX()
para chamar a função desenvolvida nesta questão.
*/

int menorValorDeNfibonacci(int n){
    if(n == 0) return 0;
    if(n == 0) return 1;
    int a = 0, b = 1, c;
    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}

void exercicio013()
{
    int n;
    printf("Digite um numero para n: ");
    scanf("%d", &n);
    printf("O n-termo de fibonacci eh: %d ",menorValorDeNfibonacci(n));
}
int main(){
    exercicio013();
}