#include <stdio.h>
#include <stdlib.h>
#include "opcoes.h"

int main() {
  int opcao;
  int *a, tam = 0;

  a = carregar(&tam);

  do {
    system("cls");

    printf("****************** MENU PRINCIPAL *******************\n");
    printf("[ 1 ] Cadastrar Números\n");
    printf("[ 2 ] Mostrar Números\n");
    printf("[ 3 ] Mostrar o Menor e o Maior Números\n");
    printf("[ 4 ] Mostrar o Somatório e o Valor Médio dos Números\n");
    printf("[ 5 ] Mostrar o Percentual de Pares e Ímpares\n");
    printf("\n");
    printf("[ 0 ] Encerrar\n");
    printf("*****************************************************\n");

    do {
      printf("Opção Desejada? ");
      scanf("%d", &opcao);
    } while ((opcao < 0) || (opcao > 5));

    printf("\n");
    if (opcao == 1) {
       cadastrar();
       a = carregar(&tam);
    }
    else if (opcao == 2) {
       mostrar(a, tam);
       system("pause");
    }
    else if (opcao == 3)
       menor_maior(a, tam);
    else if (opcao == 4)
       somatorio_media(a, tam);
    else if (opcao == 5)
       percentual(a, tam);

  } while (opcao != 0);

  printf("<<< FIM DO PROGRAMA >>>\n");

  return(0);
}
