#include <stdio.h>
// Ler o salário de 10 funcionários calcular e mostrar o maior e a média
int main()
{
  // Variáveis
  float salario;
  int cont;
  float maior, media, total;
  maior = 0;
  total = 0;

  // Estrutura de repetição e cálculo
  for (cont = 1; cont <= 10; cont = cont + 1)
  {
    printf("\nDigite o salario do funcionario:\n");
    scanf(" %f", &salario);
    total = (total + salario);
    media = (total / 10);
    maior = salario > maior ? salario : maior;
  }
  // Resultado
  printf("\n O maior salario e: %.2f\n E a media e: %.2f\n", maior, media);
  printf("\n Total= %.2f", total);
}