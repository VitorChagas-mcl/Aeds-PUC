#include <stdio.h>

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  fflush(stdin);
  char c[n][m];
  for (int i = 0; i < n; i++)
  {
    scanf("%s", c[i]);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (c[i][j] == '.')
      {
        if ((c[i - 1][j] == 'o') || (c[i][j - 1] == 'o' && c[i + 1][j - 1] == '#'))
        {
          c[i][j] = 'o';
        }
        if (c[i][j + 1] == 'o' && c[i + 1][j + 1] == '#')
        {
          for (int k = j; c[i + 1][k + 1] == '#'; k--)
          {
            c[i][k] = 'o';
          }
        }
        if (c[i + 1][j] && c[i][j] == 'o')
        {
          int k = j - 1;
          for (; c[i + 1][k + 1] == '#'; k--)
          {
            c[i][k] = 'o';
          }
        }
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("%c", c[i][j]);
    }
    printf("\n");
  }
}