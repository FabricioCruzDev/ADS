// Faça um algoritmo que leia dados inteiros e armazene-os em uma matriz 3x4. Em seguida, mostre a quantidade de números pares e ímpares armazenados na matriz.
#include <stdio.h>

int main()
{
  int mat[3][4];
  int par = 0, impar = 0, coluna = 0, linha = 0;
  printf("Digite um numero inteiro:\n");
  for (coluna = 0; coluna < 4; coluna++)
    for (linha = 0; linha < 3; linha++)
      scanf(" %d", &mat[linha][coluna]);

  for (coluna = 0; coluna < 4; coluna++)
    for (linha = 0; linha < 3; linha++)
      if (mat[linha][coluna] % 2 == 0)
        par++;
      else
        impar++;
  printf("O total de numeros pares e: %d\nO total de numeros impares e: %d", par, impar);
}