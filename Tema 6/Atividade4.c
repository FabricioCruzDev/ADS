/*Faça um algoritmo que leia 10 números inteiros e armazene-os em um vetor. Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro, observando as seguintes regras:
Se o número for par, preencha a mesma posição do segundo vetor com o número sucessor do contido na mesma posição do primeiro vetor.
Se o número for ímpar, preencha a mesma posição do segundo vetor com o número antecessor do contido na mesma posição do primeiro vetor.
Ao final, mostre o conteúdo dos dois vetores simultaneamente.*/
#include <stdio.h>

int main()
{
  int vetor1[10], vetor2[10];
  printf("Digite os numeros inteiros:\n");
  int ind = 0;
  for (ind = 0; ind < 10; ind++)
  {
    scanf(" %d", &vetor1[ind]);
    if (vetor1[ind] % 2 == 0)
      vetor2[ind] = vetor1[ind] + 1;
    else
      vetor2[ind] = vetor1[ind] - 1;
  }
  for (ind = 0; ind < 10; ind++)
  {
    printf("Vetor 1: %d\n", vetor1[ind]);
    printf("Vetor 2: %d\n", vetor2[ind]);
  }
}