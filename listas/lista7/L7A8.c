/*8. Faça um programa para ler a nota da prova de 15 alunos e armazená-las em um vetor. Em
seguida, calcule e imprima a média geral da turma.*/

#include <stdio.h>

int main(){
    double alunos[15];
    
    for(int i = 0; i < 15; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &alunos[i]);        
    }
    double soma = 0, media = 0;
    for(int i = 0; i < 10; i++){
        soma += alunos[i];
    }
    media = soma / 15;
    printf("A media da turma eh %.2f\n", media);
}