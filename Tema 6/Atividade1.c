// Faça um programa que leia 10 números inteiros e mostre-os na ordem inversa em que foram lidos
#include <stdio.h>
int main()
{
  int num[10];
  int ind = 0;

  printf("Digite 10 numeros inteiros:\n");
  for (ind = 0; ind < 10; ind++)
  {
    scanf(" %d", &num[ind]);
  }
  printf("\nOs nomeros na ordem inversa sao:");
  for (ind = 9; ind >= 0; ind--)
  {
    printf("\n%d", num[ind]);
  }
}