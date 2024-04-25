#include <stdio.h>

int main() {
  float nota1;
  float nota2;

  printf("Entre com a 1a nota: ");
  int deu_certo = scanf("%f", &nota1);

  int nota1_valida = nota1 >= 0.00f && nota1 <= 10.0f;
  if(nota1_valida){
    printf("Entre com a 2a nota: ");
    deu_certo = scanf("%f", &nota2);

    int nota2_valida = nota2 >= 0.00f && nota2<= 10.0f;
    if(nota2_valida){
      float media = 0.4f * nota1 + 0.6f * nota2;
      printf("A sua media eh %.1f\n", media);
      if(media >= 5.0f){
        printf("Aprovado\n");
      } else{
        printf("Reprovado\n");
      }
    }
    else{
      printf("Insira uma nota valida\n");
    }
  } else{
    printf("Insira uma nota valida\n");
  }
}