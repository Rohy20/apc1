/*
Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). ConsidereS ICM igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/

#include <stdio.h>

int main() {
  float preco_inicial = 0.00;

  printf("Ganha quanto??: ");
  scanf("%f", &preco_inicial);

  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  float valor_icms = ICMS * preco_inicial;
  float valor_cofins = COFINS * preco_inicial;
  float valor_pis_pasep = PIS_PASEP * preco_inicial;

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("preco inicial = %f \n", preco_inicial);
  printf("valor ICMS = %f\n", valor_icms);
  printf("valor COFINS = %f\n", valor_cofins);
  printf("valor PIS_PASEP = %f\n", valor_pis_pasep);
  printf("preco final = %f\n", preco_final);
  
  return 0;
}