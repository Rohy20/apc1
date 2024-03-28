#include <stdio.h>
#include <math.h>

int main(){
int numeroa;
int numerob;
int numeroc;

printf("Insira o numero a: ");
  int deu_certo = scanf("%i", &numeroa);
printf("Insira o numero b: ");
  deu_certo = scanf("%i", &numerob);
printf("Insira o numero c: ");
  deu_certo = scanf("%i", &numeroc);

int delta = (numerob * numerob) - 4 * numeroa * numeroc;

double bhaskara_positivo = (- numerob + sqrt(delta))/2*numeroa;
double bhaskara_negativo = (- numerob - sqrt(delta))/2*numeroa;

printf("As raizes positivas são %.f\n", bhaskara_positivo);
printf("As raizes negativas são %.f\n", bhaskara_negativo);

  return 0;
}