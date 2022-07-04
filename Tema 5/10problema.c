// Leia uma sequência de números inteiros e mostre cada número lído, exceto zero
#include <stdio.h>
int main()
{
  int num;
  do
  {
    printf("\nDigite um numero inteiro\n");
    scanf(" %d", &num);
    if (num != 0)
      printf("\nVoce digitou %d", num);
  } while (num != 0);
}