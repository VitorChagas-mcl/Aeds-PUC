#include <stdio.h>

int main(){
    int M,A,B;
    scanf("%d", &M);
    scanf("%d", &A);
    scanf("%d", &B);
    int idadeV = M - (A + B);
    if(A > B && A > idadeV) printf("%d\n",A);
    else if(B > A && B > idadeV) printf("%d\n",B);
    else printf("%d\n",idadeV);
}