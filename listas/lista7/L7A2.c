/*
2. Leia um conjunto de números reais, armazenando-o em um vetor, e calcule o quadrado dos
elementos deste vetor, armazenando o resultado em outro vetor. Os vetores devem conter 10
elementos cada. Imprima todos os vetores (original e resultante).
*/

#include <stdio.h>

int main(){
    float valores[10], quadrados[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }
    for(int i = 0; i < 10; i++){
        quadrados[i] = valores[i] * valores[i];
    }
    for(int i = 0; i < 10; i++){
        printf("O valor na posicao %d eh %.2f e seu quadrado eh %.2f\n", i + 1, valores[i], quadrados[i]);
    }
}