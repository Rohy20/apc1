#include <stdio.h>
#include <math.h>

int main(){
int distancia;
int angulo;
int altura;
const double PI = 3.1416;

printf("Insira a distancia: ");
  int deu_certo = scanf("%i", &distancia);
printf("Insira o angulo ");
  deu_certo = scanf("%i", &angulo);

double calculo_altura = sin(angulo * PI / 180) * distancia;

printf("A altura alcançada pelo avião é: %.2f\n", calculo_altura);

  return 0;
}