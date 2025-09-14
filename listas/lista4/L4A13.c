#include <stdio.h>

/*
Fazer uma função que recebe um número inteiro n e retorna o n-ésimo termo da sequência de
Fibonacci. Além disso, você deve fazer um procedimento exercicioXX() para chamar a função
desenvolvida nesta questão.
*/

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 0) return 1;
    int a = 0, b = 1, c;
    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void exercicio013()
{
    int n;
    printf("Digite um numero para n: ");
    scanf("%d", &n);
    printf("O n-termo de fibonacci eh: %d ",fibonacci(n));
}
int main(){
    exercicio013();
}