// Faça um algoritmo que leia dados e armazene em uma matriz 3x3 de números inteiros. Em seguida, mostre os elementos que sejam iguais ao maior número armazenado na matriz.
#include <stdio.h>

int main()
{
  int mat[3][3], lin, col, maior = 0;
  printf("\n Digite os valores para a matriz:\n");
  for (lin = 0; lin < 3; lin++)
    for (col = 0; col < 3; col++)
    {
      scanf(" %d", &mat[lin][col]);
      if (mat[lin][col] >= maior)
        maior = mat[lin][col];
    }
  for (lin = 0; lin < 3; lin++)
    for (col = 0; col < 3; col++)
    {
      if (mat[lin][col] == maior)
        printf("O maior valor e: %d e esta na linha %d, coluna %d\n", maior, lin, col);
    }
}