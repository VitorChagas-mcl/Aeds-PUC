#include <stdio.h>

int main(){
    int N, H;
    scanf("%d %d", &N, &H);
    int cont = 0, vet[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < N; i++){
        if(vet[i] <= H) cont++;
    }
    printf("%d\n", cont);
}
