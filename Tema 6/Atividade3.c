// Leia uma sequência de letras, terminando (.), e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu.
#include <stdio.h>
int main()
{
  int vogais[5] = {0, 0, 0, 0, 0}, posicao;
  char letra;
  printf("\nDigite o seu texto:\n");
  scanf(" %c", &letra);
  while (letra != '.')
  {
    switch (letra)
    {
    case 'a':
      vogais[0]++;
      break;
    case 'e':
      vogais[1]++;
      break;
    case 'i':
      vogais[2]++;
      break;
    case 'o':
      vogais[3]++;
      break;
    case 'u':
      vogais[4]++;
      break;
    }
    scanf("%c", &letra);
  }
  printf("\n A quantidade de cada vogal, em ordem \n");
  for (posicao = 0; posicao < 5; posicao++)
  {
    printf("\n%d", vogais[posicao]);
  }
}