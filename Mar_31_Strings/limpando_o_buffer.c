#include <stdio.h>

int main() {
  char nome[100];
  int idade;

  printf("Idade: ");
  scanf("%d", &idade);

  getchar(); // limpa o buffer de entrada de dados: fflush(stdin);

  printf("Nome.: ");
  scanf("%[^\n]s", nome);

  printf("\n");
  printf("%s tem %d anos.\n", nome, idade);

  return 0;
}
