/*desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada aluno. Lembre-se que apenas a média igual ou acima de 7 aprova o aluno.*/
#include <stdio.h>

int main()
{
  int alunos, num_aluno;
  float av_1, av_2, av_3, media;

  printf("Digite a quantidade de alunos na turma: \n");
  scanf("%d", &alunos);
  num_aluno = 1;

  while (num_aluno <= alunos)
  {
    printf("\nDigite a nota da Av-1 do aluno: %d\n", num_aluno);
    scanf(" %f", &av_1);
    printf("Digite a nota da Av-2 do aluno: %d\n", num_aluno);
    scanf(" %f", &av_2);
    printf("Digite a nota da Av-3 do aluno: %d\n", num_aluno);
    scanf(" %f", &av_3);
    media = (av_1 + av_2 + av_3) / 3;
    media >= 7 ? printf("\nO aluno %d foi: Aprovado com media: %.2f\n", num_aluno, media) : printf("\nO aluno %d foi: Reprovado com media: %.2f\n", num_aluno, media);
    num_aluno++;
  }
  printf("Todas as notas foram lancadas");
}