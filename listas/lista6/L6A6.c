#include <stdio.h>

/*6. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e
troque o seu conteúdo. Após a execução da função, A conterá o valor de B e B terá o valor de A.
*/
#include <stdio.h>
int trocaValores(int* ptrN1, int* ptrN2){
    int aux = *ptrN1;
    *ptrN1 = *ptrN2;
    *ptrN2 = aux;
    return 0;
}

int main(){
    int A,B;
    printf("Digite dois valores: ");
    scanf("%d %d", &A, &B);
    printf("Antes\n");
    printf("Valor de A = %d, e B = %d\n", A, B);
    trocaValores(&A,&B); 
    printf("Depois\n");
    printf("Valor de A = %d, e B = %d", A, B);
}