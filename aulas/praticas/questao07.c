#include <stdio.h>
#include <math.h>

int main(){
int altura;
int distancia;
const double PI = 3.1416;
const int seno_angulo = sin(45 * PI / 180);

printf("Insira a distancia: ");
  int deu_certo = scanf("%i", &distancia);
printf("Insira a altura ");
  deu_certo = scanf("%i", &altura);

int calculo = seno_angulo * altura/distancia;

printf("A altura alcançada pelo avião é: %i\n", calculo);

  return 0;
}