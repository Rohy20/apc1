/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura /
2). Considere base e altura números inteiros maior que 0.
*/

#include <stdio.h>

int main() {
  float base = 0, altura = 0;

  printf("Insira a base: ");
  scanf("%f", &base);

  printf("Insira a altura: ");
  scanf("%f", &altura);

  float area = base * altura / 2;

  printf("A area do triangulo eh %f\n", area);

  return 0;
}