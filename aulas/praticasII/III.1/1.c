/*1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.*/
#include <stdio.h>

int main(){
  int numero;
  
  printf("insira um numero: ");
  int deu_certo = scanf("%i", &numero);

  if(deu_certo){
    int par = numero % 2 == 0;
    if(par){
      printf("o numero é par\n");
    } else{
      printf("o numero é impar\n");
    }
  } else{
    printf("Insira um numero valido\n");
  }
  return 0;
}
