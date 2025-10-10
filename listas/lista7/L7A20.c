/*20. Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui.*/

int main(){
    int mat[4][4], soma = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    int cont = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(mat[i][j]>10){
                cont++;
                printf("%d esta na posicao [%d][%d]\n", mat[i][j], i, j);
            }
        }
    }
    printf("Existem %d valores maior que 10 na matriz\n", cont);
}
