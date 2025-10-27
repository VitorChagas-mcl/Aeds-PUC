#include <stdio.h>

int main(){
    float aux = 1.0, s = 1.0;
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++){
        s += (aux + 2.0)/i;
        aux += 2.0;
    }
    printf("%.2f\n", s);
}
