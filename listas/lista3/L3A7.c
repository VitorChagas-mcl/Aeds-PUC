//7. Faça um programa para calcular o N -ésimo termo da sequência de Fibonacci (1, 1, 2, 3, 5, 8, 13,21, ...)

#include <stdio.h>

int main(){
    int nEsimo, n1 = 1, n2 = 1, n3;
    printf("Digite o n-esimo termo: ");
    scanf("%d", &nEsimo);
    if(nEsimo == 1 || nEsimo == 2){
        printf("O n-esimo termo eh: 1\n");
    }else{
        for(int i = 3; i <= nEsimo; i++){
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        printf("O n-esimo termo eh: %d \n", n3);
    }
}