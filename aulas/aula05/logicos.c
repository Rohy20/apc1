#include <stdio.h>

int main(){
  int numero;

  printf("Entre com qualquer numero doidão: ");
  int deu_certo = scanf("%i", &numero);
  
  // 0 < x < 10, 0 < x E x < 10
  int maior_que_0_e_menor_que_10 = numero > 0 && numero < 10;
  printf("0 < numero < 10? %i\n", maior_que_0_e_menor_que_10);

  // x < 0, x > 10, x<10 OU x > 10
  int menor_que_0_ou_maior_que_10 = numero < 0 || numero > 10;
  printf("0 < numero ou numero > 10? %i\n", menor_que_0_ou_maior_que_10);

  //x NAO < 0
  int nao_eh_menor_0 = ! (numero < 0);
  printf("numero nao <0 %i\n", nao_eh_menor_0);
  return 0;
}