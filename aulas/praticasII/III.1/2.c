/* 2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%. */

#include <stdio.h>

int main() {
  float preco;
  float preco_desconto;

  printf("insira o preço do produto: ");
  int deu_certo = scanf("%f", &preco);

  if(deu_certo && preco >= 0.0f){
    if(preco <= 100.0f){
      preco_desconto = preco * 0.01f;
    } else if(preco < 500.00){
      preco_desconto = preco * 0.05f;
    } else {
      preco_desconto = preco * 0.1f;
    }
    printf("O valor do desconto é %.2f\n", preco_desconto);
  }else {
    printf("Valor invalido. Tente Novamente\n");
  }
    
  
  return 0;
}