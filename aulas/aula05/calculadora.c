#include <stdio.h>
#include <math.h>

int main(){
  int numero1;
  int numero2;
  const double PI = 3.1416;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos numeros é %i\n", soma);

  int sub = numero1 - numero2;
  printf("A subtração dos numeros é %i\n", sub);

  int multi = numero1 * numero2;
  printf("A multiplicação dos numeros é %i\n", multi);

  int divi = 1.0f * numero1/numero2;
  printf("A divisão dos numeros é %i\n", divi);

  int resto = numero1 % numero2;
  printf("O resto da divisao dos numeros é %i\n", resto);

  //numero1 = numero1 + 1
  //incremento
  //++numero1;
  //ou
  //numero1++;

  printf("O incremento do primeiro numero é %i\n", numero1++);
  printf("O incremento do primeiro numero é %i\n", ++numero1);

  //numero1 = numero - 1
  //decremento
  printf("O decremento do primeiro numero é %i\n", numero1--);
  printf("O decremento do primeiro numero é %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro numero é %f\n", raiz_quadrada);

  double potencia = pow(numero1, 3);
  printf("A 3apotencia do primeiro numero é %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("o log2 do primeiro numero é %f\n", logaritmo2);

  double seno = sin(numero1 * PI / 180);
  printf("O seno do primeiro numero é %f\n", seno);

  double coseno = cos(numero1 * PI / 180);
  printf("O coseno do primeiro numero é %f\n", coseno);

  double tangente = tan(numero1 * PI / 180);
  printf("A tangente do primeiro numero é %f\n", tangente);
  
  return 0;
}

