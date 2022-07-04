
// Leia o salário bruto de 15 funcionários de uma empresa
// calcule e exiba o salário líquido de cada funcionário.
// salário líquido é calculado abatendo o imposto do salário bruto, com base nesta tabela de imposto.
// mostre o total de salários brutos, salários líquidos e impostos de todos os funcionários.
#include <stdio.h>

int main()
{
  float salario_bruto, salario_liquido, imposto, total_bruto, total_liquido, total_imposto;
  int faixa_imposto, total_funcionarios, funcionario;
  total_bruto = 0, 00;
  total_liquido = 0, 00;
  total_imposto = 0, 00;
  funcionario = 0;

  printf("Digite a quantidade de funcionarios na sua folha de pagamentos:\n");
  scanf(" %d", &total_funcionarios);

  do
  {
    funcionario++;
    printf("\n\nDigite o salario do funcionario %d: ", funcionario);
    scanf(" %f", &salario_bruto);
    if (salario_bruto <= 999.00)
      faixa_imposto = 1;
    else if (salario_bruto >= 900.01 && salario_bruto <= 1999.00)
      faixa_imposto = 2;
    else if (salario_bruto >= 1999.01 && salario_bruto <= 9999.00)
      faixa_imposto = 3;
    else if (salario_bruto >= 9999.01 && salario_bruto <= 99999.00)
      faixa_imposto = 4;
    else if (salario_bruto > 99999.00)
      faixa_imposto = 5;

    switch (faixa_imposto)
    {
    case 1:
      salario_liquido = salario_bruto - (salario_bruto * 0.1);
      printf("\nO salario liquido do funcionario %d e R$ %.2f", funcionario, salario_liquido);
      break;
    case 2:
      salario_liquido = salario_bruto - (salario_bruto * 0.15);
      printf("\nO salario liquido do funcionario %d e R$ %.2f", funcionario, salario_liquido);
      break;
    case 3:
      salario_liquido = salario_bruto - (salario_bruto * 0.20);
      printf("\nO salario liquido do funcionario %d e R$ %.2f", funcionario, salario_liquido);
      break;
    case 4:
      salario_liquido = salario_bruto - (salario_bruto * 0.25);
      printf("\nO salario liquido do funcionario %d e R$ %.2f", funcionario, salario_liquido);
      break;
    case 5:
      salario_liquido = salario_bruto - (salario_bruto * 0.30);
      printf("\nO salario liquido do funcionario %d e R$ %.2f", funcionario, salario_liquido);
      break;
    }
    total_bruto += salario_bruto;
    total_liquido += salario_liquido;
    total_imposto += salario_bruto - salario_liquido;

  } while (funcionario < total_funcionarios);
  printf("\n\nSua empresa tem %d funcionarios.\nO salario bruto total e: R$ %.2f \n O salario liquido total e: R$ %.2f \n. O total de imposto recolhido e R$ %.2f", total_funcionarios, total_bruto, total_liquido, total_imposto);
}