#include <stdio.h>

/*
31. Leia uma matriz 5 × 10 que se refira às respostas de 10 questões de múltipla escolha, referentes a
5 alunos. Leia também um vetor de 10 posições contendo o gabarito das respostas, que podem
ser a, b, c ou d.Seu programa deverá comparar as respostas de cada candidato com o gabarito e
emitir um vetor denominado resultado, contendo a pontuação correspondente a cada aluno.
*/

int main()
{
    char prova[5][10], gabarito[10];
    int nota[5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Digite a resposta %d do aluno %d: ", j + 1, i + 1);
            scanf(" %c", &prova[i][j]);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a resposta correta %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        nota[i] = 0;
        for (int j = 0; j < 10; j++)
        {
            if (prova[i][j] == gabarito[j])
            {
                nota[i]++;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d: Nota %d\n", i + 1, nota[i]);
    }
}