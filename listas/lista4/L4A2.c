#include <stdio.h>

/*
2. Fazer uma função void mostrarParesEmOrdemDecrescente(int n) que recebe um número inteiro
n e mostra na tela (em ordem decrescente) todos os valores menores do que n para a sequência do
exercício anterior. A sua função mostrarParesEmOrdemDecrescente deve utilizar a função par
desenvolvida na questão anterior. Além disso, você deve fazer um procedimento exercicio02()
para ler o valor de n e chamar a função desenvolvida nesta questão.
*/

void mostrarParesEmOrdemDecrescente(int n){
    for(int i = n-1; i > 0; i--){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
}

void exercicio02(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Pares em ordem decrescente menores que %d: ", n);
    mostrarParesEmOrdemDecrescente(n);
}

int main(){
    exercicio02();
}