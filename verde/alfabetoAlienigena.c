#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int k, n;scanf("%d %d", &k, &n);
    fflush(stdin);
    char *strK = (char *)malloc((k + 1) * sizeof(char));
    char *strN = (char *)malloc((n + 1) * sizeof(char));

    scanf("%s", strK);
    strK[strcspn(strK, "\n")] = '\0';
    fflush(stdin);
    scanf("%s", strN);
    strK[strcspn(strN, "\n")] = '\0';

    for (int i = 0; i < k; i++)
    {
        if (strK[i] == strN[n - k + i])
        {
            printf("S\n");
            free(strK);
            free(strN);
            return 0;
        }
    }
    printf("N\n");
    free(strK);
    free(strN);
}