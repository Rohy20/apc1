//8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

#include <stdio.h>

int main(){
int seg = 0.00;

printf("Insira o tempo em segundos: ");
int deu_certo = scanf("%i", &seg);

int minutos = seg / 60;

if(minutos < 60){
  printf("O resultado em minutos é: %i\n", minutos);
}
else if(minutos == 60){
  printf("O resultado é de 1 hora");
}
else if(minutos > 60){
  float horas = minutos / 60;
  printf("O resultado é: %f\n", horas);
}
  
  return 0;
}