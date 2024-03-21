#include <stdio.h>

int main(){
  float GB = 0.00;

  printf("Quantos GB??: ");
  scanf("%f", &GB);

  double bytes = 1024000;

  double conversao = GB*bytes;

  printf("O valor em bytes é: %f\n", conversao);
  
  return 0;
}