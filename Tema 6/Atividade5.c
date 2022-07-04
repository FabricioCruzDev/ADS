/*Faça um algoritmo que leia 10 números inteiros e armazene-os em um vetor.
Na sequência, leia uma lista de 5 números inteiros e verifique se cada um deles está contido em alguma posição do vetor. Em caso positivo, mostre a posição do vetor em que ele se encontra.*/
#include <stdio.h>

int main()
{
  int vetor[10], num[5], ind = 0;

  printf("\nDigite 10 numeros inteiros\n");
  for (ind = 0; ind < 10; ind++)
  {
    scanf(" %d", &vetor[ind]);
  }
  printf("\nDigite mais 5 numeros inteiros\n");
  for (ind = 0; ind < 5; ind++)
  {
    scanf(" %d", &num[ind]);
    int indVetor = 0;
    while (indVetor < 10)
    {
      if (num[ind] == vetor[indVetor])
        printf("Este numero esta na posicao %d do vetor\n", indVetor);
      indVetor++;
    }
  }
}