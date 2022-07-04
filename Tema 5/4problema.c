#include <stdio.h>

int main()
{
  // leia 3 notas de 40 alunos
  int count;
  float nota_1, nota_2, nota_3, media;
  // calcule e mostre a média aritmética e a situação de aprovação de cada um deles.
  for (count = 1; count <= 4; count = count + 1)
  {
    printf("\n Digite a nota da Av1: ");
    scanf(" %f", &nota_1);
    printf("\nDigite a nota da Av2: ");
    scanf(" %f", &nota_2);
    printf("\nDigite a nota da Av3: ");
    scanf(" %f", &nota_3);
    media = (nota_1 + nota_2 + nota_3) / 3;
    printf("A media do aluno fo: %.2f", media);
    if (media >= 7)
      printf("\n ALUNO APROVADO");
    else
      printf("\n ALUNO REPROVADO\n");
  }
}
