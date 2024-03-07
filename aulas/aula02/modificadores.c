#include <stdio.h>

int main(){
  signed char caracter_com_sinal; //-128 a 127
  unsigned char caracter_sem_sinal; //0 a 255

  signed int inteiro_com_sinal; //-2bi a 2bi 4 bytes
  unsigned int inteiro_sem_sinal; //0 a 4bi

  short int inteiro_curto_com_sinal; // -32k a 32k 2 bytes
  unsigned short int inteiro_curto_sem_sinal; //0 a 65k 

  long int inteiro_longo_com_sinal; // -15hexa a 15hexa 8bytes
  unsigned long int inteiro_longo_sem_sinal; //0 a 18hexa

  long double duplo_longo; //-1.2e+4932 a 1.2e+4932
  
  return 0;
}