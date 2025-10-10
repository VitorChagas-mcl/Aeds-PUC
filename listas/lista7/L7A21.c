/*21. Declare uma matriz 5 × 5.Preencha com 1 a diagonal principal e com 0 os demais elementos.
Escreva, ao final, a matriz obtida.*/

int main(){
    int mat[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j)mat[i][j] = 1;
            else mat[i][j] = 0;
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
