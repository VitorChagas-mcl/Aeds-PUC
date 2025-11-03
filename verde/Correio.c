#include <stdio.h>

int main(){
    int N,A,L,P;
    scanf("%d", &N);
    scanf("%d", &A);
    scanf("%d", &L);
    scanf("%d", &P);
    
    if(A>=N && L>=N && P>=N){
        printf("S\n");
    }else{
        printf("N\n");
    }
}