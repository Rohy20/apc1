/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura /
2). Considere base e altura números inteiros maior que 0.
*/

#include <stdio.h>

int main() {
  int base = 0, altura = 0;

  printf("Insira a base: ");
  scanf("%i", &base);

  printf("Insira a altura: ");
  scanf("%i", &altura);

  int area = base * altura / 2;

  printf("A area do triangulo eh %i\n", area);

  return 0;
}