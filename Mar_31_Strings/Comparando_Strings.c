#include <stdio.h>
#include <string.h>

int main() {
  char nome[100];

  while (1) {
    printf("Nome (FIM para encerrar): ");
    scanf("%[^\n]s", nome);
    if (strcmp(nome, "FIM") == 0)
        break;

    printf("\n");
    printf("Olah Sr(a). %s.\n\n\n", nome);

    getchar(); // limpa o buffer de entrada: fflush(stdin);
  }

  return 0;
}
