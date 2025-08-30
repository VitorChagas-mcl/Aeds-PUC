/*8. Os alunos de uma turma com numAlunoS fizeram numProva provas. Leia cada uma das
numProva provas feitas por cada um dos numAlunoS alunos. Imprima na tela: a média de
cada aluno, a média da turma e o percentual dos alunos que tiveram média maior ou igual a
80%
*/

#include <stdio.h>

int main(){
    int numAlunos, numProva;
    float mediaTurma = 0, percentualAlunos = 0;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &numAlunos);
    printf("Digite a quantidade de provas: ");
    scanf("%d", &numProva);
    for(int i = 0; i < numAlunos; i++){
        float soma = 0, media;
        for(int j = 0; j < numProva; j++){
            float nota;
            printf("Digite a nota da prova %d do aluno %d: ", j+1, i+1);
            scanf("%f", &nota);
            soma += nota;
        }
        media = soma;
        mediaTurma += media;
        if(media >= 80) percentualAlunos++;
        printf("A media do aluno %d eh: %.2f \n", i+1, media);
    }
    printf("A media da turma eh: %.2f \n", mediaTurma/numAlunos);
    printf("O percentual de alunos com media maior ou igual a 80 eh: %.2f%% \n", (percentualAlunos/numAlunos)*100);
}