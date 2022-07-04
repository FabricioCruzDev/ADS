#include <stdio.h>

int main()
{
  int cont = 1, numero;
  printf("Digite um numero:\n");
  scanf("%d", &numero);

  for (cont = 1; cont <= 20; cont = cont + 1)
  {
    printf("\n Numero = %d", numero);
  }
  return (0);
}