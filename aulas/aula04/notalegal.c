#include <stdio.h>

int main() {
  char nome[31];
  int quantidade;
  float valor;

  printf("Bota o nome do produto ai pohh: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("E A QUANTIDADE BEM?: ");
  deu_certo = scanf("%i", &quantidade);

  printf("e ta custando quanto?: ");
  deu_certo = scanf("%f", &valor);

  printf("\x1b[32m----------------------------\n");
  printf("     N O T A  L E G A L     \n");
  printf("----------------------------\x1b[0m\n");
  printf("\x1b[36mITEM\x1b[0m           QTD   VALOR\n");
  printf("%-14s %03i %8.2f\n", nome, quantidade, valor);
  return 0;
}