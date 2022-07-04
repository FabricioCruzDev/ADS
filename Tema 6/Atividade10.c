// Faça um programa que gere uma matriz 5x5 de números biários, que contenham na diagonal principal o número 0 (zero).
#include <stdio.h>

int main()
{
  int mat[5][5], lin, col;

  for (lin = 0; lin < 5; lin++)
  {

    for (col = 0; col < 5; col++)
    {
      if (col != lin)
        mat[lin][col] = 1;
      else
        mat[lin][col] = 0;
      printf("%d", mat[lin][col]);
    }
    printf("\n");
  }
}
