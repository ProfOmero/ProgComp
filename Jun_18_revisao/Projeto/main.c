#include <stdio.h>
#include <stdlib.h>
#include "opcoes.h"

int main() {
  int opcao;

  do {
    system("cls");

    printf("********* MENU PRINCIPAL *********\n");
    printf("[ 1 ] Chama a Opção 1\n");
    printf("[ 2 ] Chama a Opção 2\n");
    printf("[ 3 ] Chama a Opção 3\n");
    printf("[ 0 ] Encerrar\n");
    printf("**********************************\n");

    do {
      printf("Opção Desejada? ");
      scanf("%d", &opcao);
    } while ((opcao < 0) || (opcao > 3));

    printf("\n");
    if (opcao == 1)
       opcao_1();
    else if (opcao == 2)
       opcao_2();
    else if (opcao == 3)
       opcao_3();

  } while (opcao != 0);

  printf("<<< FIM DO PROGRAMA >>>\n");

  return(0);
}
