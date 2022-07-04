// Faça um programa que leia a nota de 20 alunos da turma e mostre as que são iguais ou superiores à média da turma.
#include <stdio.h>
int main()
{
  int aluno;
  float notas[20], media, total;
  printf("\nDigite a nota dos 20 alunos:\n");
  aluno = 0;
  media = 0;
  total = 0;
  for (aluno = 0; aluno < 20; aluno++)
  {
    scanf(" %f", &notas[aluno]);
    total += notas[aluno];
  }
  media = total / 20;
  printf("\nNotas que atingiram a media da turma:");
  for (aluno = 19; aluno >= 0; aluno--)
  {
    if (notas[aluno] >= media)
      printf("\n %.2f", notas[aluno]);
  }
}