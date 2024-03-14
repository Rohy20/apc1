/*
  7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
*/
#include <stdio.h>

int main(){
  float valor_da_hora_de_trabalho = 150.00;
  float total_horas_trabalhadas = 100;

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float Salario_bruto = valor_da_hora_de_trabalho * total_horas_trabalhadas; 

  float Imposto_de_renda = Salario_bruto * IR;
  float Imposto_INSS = Salario_bruto * INSS;

  float salario_liquido = Salario_bruto - Imposto_de_renda - Imposto_INSS;

printf("\x1b[35m\x1b[40m--------------------------------\n");
printf("     C O N T R A C H E Q U E    \n");
printf("--------------------------------\x1b[0m\n");
printf("\x1b[36m\x1b[40mSalario Bruto......: R$ %8.2f\x1b[0m\n", Salario_bruto);
printf("\x1b[32m\x1b[40mImposto Renda......: R$ %8.2f\x1b[0m\n", Imposto_de_renda);
printf("\x1b[33m\x1b[40mImposto INSS......:  R$ %8.2f\x1b[0m\n", Imposto_INSS);
printf("\x1b[31m\x1b[40mSalario Liquido....: R$ %8.2f\x1b[0m\n",salario_liquido);
  return 0;
}