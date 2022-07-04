#include <stdio.h>

int main()
{
  // desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos funcionários de uma empresa.
  float reajuste, salario, salario_atual, maior_salario;
  int count;
  maior_salario = 0;
  printf("\nDigite a porcentagem do reajuste dos salarios\n");
  scanf(" %f", &reajuste);
  // Na sequência, deve ler o salário de cada um dos 50 funcionários,
  for (count = 1; count <= 5; count = ++count)
  {
    printf("\nDigite o salario do funcionario: ");
    scanf(" %f", &salario);
    // calcular e mostrar o novo salário reajustado, aplicando a porcentagem de ajuste sobre os respectivos salários atuais.
    salario_atual = salario + (salario * reajuste) / 100;
    printf("\n O salario atual passa a ser: %.2f", salario_atual);
    maior_salario = salario_atual > maior_salario ? salario_atual : maior_salario;
  }
  // Ao final, o maior salário reajustado da empresa deve ser apresentado na tela.
  printf("\n O maior salario e: %.2f", maior_salario);
}