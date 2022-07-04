#include <stdlib.h>
#include <stdio.h>
int main()
{
  // ler 15 números inteiros e exibir o maior deles
  int num_1, cont, maior;
  maior = 0;
  for (cont = 1; cont <= 15; cont = cont + 1)
  {
    printf("\nDigite um numero inteiro\n");
    scanf(" %d,", &num_1);
    maior = num_1 > maior ? num_1 : maior;
  }
  printf("\nO maior numero digitado foi: %d", maior);
}