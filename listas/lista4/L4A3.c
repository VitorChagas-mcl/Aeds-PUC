/*
Fazer uma função double umSobreImpar(int n) que recebe um número inteiro n e retorna o n-ésimo
termo da sequência 1/3 , 1/5 , 1/7 , 1/9 , 1/11 .... Além disso, você deve fazer um procedimento exercicio03()
para ler o valor de n e chamar a função desenvolvida nesta questão.
*/

#include <stdio.h>

double umSobreImpar(int n){
    return 1.0 / (2 * n + 1);
}

void exercicio03(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("O n-esimo termo da sequncia eh: %.2f", umSobreImpar(n));
}

int main(){
    exercicio03();
}