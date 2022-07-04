/*Em uma turma com 5 alunos, cada um faz 3 provas por semestre. Além de armazenar as 3 provas dos 5 alunos, existe a necessidade de mostrar:

A média de cada prova.

A média de cada aluno.

A média da turma.*/
#include <stdio.h>
void main()
{
  int aluno[5], numAluno = 0, numAv = 1;
  float Av[3], media[5], mediaTurma = 0, totalAv[5];
  printf("\nDigite a nota dos alunos\n");

  while (numAluno < 5)
  {
    for (numAv = 1; numAv <= 3; numAv++)
    {
      printf("\nAv%d: ", numAv);
      scanf(" %f", &Av[numAv - 1]);
      totalAv[numAluno] += Av[numAv - 1];
      media[numAluno] = totalAv[numAluno] / 3;
    }
    printf("\nA media do aluno foi: %.2f", media[numAluno]);
    mediaTurma += media[numAluno];
    numAluno++;
  }
  printf("\nA media da turma foi: %.2f", mediaTurma);
}