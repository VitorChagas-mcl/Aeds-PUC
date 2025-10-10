/*17. Leia 10 números inteiros e armazene-os em um vetor v. Crie dois novos vetores, v1 e v2. Copie
os valores ímpares de v para v1 e os valores pares de v para v2. Note que cada um dos vetores
v1 e v2 tem, no máximo, 10 elementos, mas nem todos podem ser utilizados. Ao final, escreva
apenas os elementos utilizados de v1 e v2.
*/

#include <stdio.h>

#define TAM 10

int main()
{
    int v1[TAM], v2[TAM], v[TAM];
    int contV1 = 0, contV2 = 0;
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o valor %d: ", i);
        scanf("%d", &v[i]);
    }
    for(int i = 0; i < TAM; i++){
        if(v[i] % 2 == 0){
            v2[contV2] = v[i];
            contV2++;
        }else{
            v2[contV1] = v[i];
            contV1++;
        }
    }
    for(int i = 0; i < contV1; i++){
        printf("Vetor v1[%d]: %d\n", i, v1[i]);
    }
    for(int i = 0; i < contV2; i++){
        printf("Vetor v2[%d]: %d\n", i, v2[i]);
    }
}