#include <stdio.h>
#include <string.h>
/*int main(){
    int n;
    scanf("%d", &n);
    getchar();
    char str[n][1000], buscar[100];
    scanf("%[^\n]", buscar);
    getchar();
    for(int i = 0; i < n; i++){
        scanf("%[^\n]", str[i]);
        getchar();
    }
    for(int i = 0; buscar[i] != '\0'; i++){
        if(buscar[i] >= 'A' && buscar[i] <= 'Z') buscar[i] += 32; 
    }
    int cont = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; str[i][j] != '\0'; j++){
            if(str[i][j] >= 'A' && str[i][j] <= 'Z') str[i][j] += 32; 
        }
    }
    for(int i = 0; i < n; i++){
        if(strstr(str[i], buscar) != NULL){
            cont++;
        }
    }
    printf("%d\n", cont);
}
*/