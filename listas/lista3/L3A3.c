//3. Faça um programa que imprima todos os elementos da série de Fibonacci menores que L.

#include <stdio.h>

int main(){
    int n, t1 = 0, t2 = 1, proxTermo;
    printf("Digite um valor: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(t1 < n){
        printf("%d ", t1);
        proxTermo = t1 + t2;
        t1 = t2;
        t2 = proxTermo;  
        }else{
            return 0;
        }
    }
}