/*desenvolva um programa que leia uma sequência de números, podendo terminar com o número 0 ou 9. Para cada número lido (diferente de 0 ou 9), mostre seu sucessor caso o número seja par, ou seu antecessor se o número for ímpar.*/
#include <stdio.h>
int main()
{
  int num;
  do
  {
    printf("\nDigite um numero inteiro diferente de 0 ou 9\n");
    scanf(" %d", &num);
    if (num != 0 && num != 9)
    {
      num = num % 2 == 0 ? printf("Antecessor: %d", --num) : printf("Sucessor: %d", ++num);
    }
  } while (num != 0 && num != 9);
}