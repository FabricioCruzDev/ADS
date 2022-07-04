// desenvolva um programa que leia um número N e, em seguida, uma lista de N números inteiros. Este programa também deve calcular e mostrar a soma dos números pares e dos números ímpares da lista.
#include <stdio.h>
int main()
{
  int count, n, num, soma_pares, soma_impares;
  soma_pares = 0;
  soma_impares = 0;
  printf("\nDigite a quantidade de numeros da lista: ");
  scanf(" %d", &n);
  for (count = 1; count <= n; count++)
  {
    printf("\nDigite um numero inteiro: ");
    scanf(" %d", &num);
    if (num % 2 == 0)
      soma_pares += num;
    else
      soma_impares += num;
  }
  printf("\n Soma dos numeros pares = %d e a soma dos numeros impares = %d", soma_pares, soma_impares);
}