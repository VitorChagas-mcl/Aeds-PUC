#include <stdio.h>

int mdc(int m, int n){
    if(n == 0) return m;
    return mdc (n, m % n);
}

int main(){
    int m, n;
    printf("Digite um numero para m e n: ");
    scanf("%d %d", &m, &n);
    printf("O mdc de %d e %d eh: %d", m, n, mdc(m, n)); 
}