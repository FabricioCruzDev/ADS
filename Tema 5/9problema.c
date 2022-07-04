/*desenvolver um programa que leia uma sequência de letras (a... z) terminada em ponto (.) e que mostre quantas vezes cada vogal (a, e, i, o, u) apareceu na lista.*/
#include <stdio.h>

int main()
{
  char vogal;
  int total_vogais = 0;
  printf("\n Digite o seu texto:\n");
  while (vogal != '.')
  {
    scanf(" %c", &vogal);
    if (vogal == 'a' || vogal == 'A')
      total_vogais++;
    if (vogal == 'e' || vogal == 'E')
      total_vogais++;
    if (vogal == 'i' || vogal == 'I')
      total_vogais++;
    if (vogal == 'o' || vogal == 'O')
      total_vogais++;
    if (vogal == 'u' || vogal == 'U')
      total_vogais++;
  }
  printf("O seu texto tem: %d vogais", total_vogais);
}