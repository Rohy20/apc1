#include <stdio.h>

int main(){
  int opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar Saldo\n");
  printf("2 - Fazer Recarga\n");
  printf("3 - Listar Recados\n");
  printf("4 - Ligacoes Feitas\n");
  printf("0 - Sair\n");
  printf("Escolha uma opção => ");
  int deu_certo = scanf("%i", &opcao);

  switch(opcao){
    case 1: printf("Seu saldo é de 10.00\n"); break;
    case 2: {
      //float valor_inicial = 10.00;
      float valor;
      printf("Entre com o valor desejado: ");
      deu_certo = scanf("%f", &valor);
      //float add_saldo = valor_inicial + valor;
      //printf("Seu saldo agora é de: %f\n", &add_saldo);
      break;
    }
    case 3: printf("Você não possui recados"); break;
    case 4:
    printf("61 99999-9999");
    printf("61 98888-8888");
    printf("61 97777-7777");
    break;
    case 0:
    printf("Até Logo");
    default:
    printf("Opção invalida. Tente Novamente");
  }
  
  return 0;
}