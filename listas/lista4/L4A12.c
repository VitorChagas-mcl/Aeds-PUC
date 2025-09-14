#include <stdio.h>

/*
Fazer uma função que recebe um número inteiro n e imprima os n primeiros múltiplos de 5. Além
disso, você deve fazer um procedimento exercicioXX() para chamar a função desenvolvida nesta
questão.
*/

int multiplosDe5(int n){
    for(int i = 1; i <= n; i++){
        if(i % 5 == 0) printf("%d ", i);
    }
    return 0;
}

void exercicio012()
{
    int n;
    printf("Digite um numero para n: ");
    scanf("%d", &n);
    multiplosDe5(n);
}
int main(){
    exercicio012();
}