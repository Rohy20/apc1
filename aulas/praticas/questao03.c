#include <stdio.h>

int main(){
  float raio = 0.00;

  printf("Digita o raio pa nois: ");
  scanf("%f", &raio);

  float perimetro = 2*3.1416*raio;

  printf("o raio da pizza é: %f\n", perimetro);
    
  return 0;
}