#include <stdio.h>

int main() {
  char nome[100];

  printf("Informe um Nome?\n");
  scanf("%[^\n]s", nome);

  printf("\nSeja bem-vindo(a) %s.\n", nome);

  return 0;
}
