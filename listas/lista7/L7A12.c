/*12. Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores
negativos.
*/

#include <stdio.h>

int main(){
    int vet[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i < 10; i++){
        if(vet[i] < 0) vet[i] = 0;    
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
}