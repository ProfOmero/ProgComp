#include <stdio.h>
#include <string.h>

void iniciaisDoNome(char *nome, char *iniciais) {
  int i, j = 0, n = strlen(nome);

  for(i=0; i<n; i++) {
    if ((nome[i] >= 'A') && (nome[i] <= 'Z')) {
       iniciais[j] = nome[i];
       j = j + 1;
    }
  }
  inicias[j] = '\0';
}

int main() {
  char nome[100], iniciais[10];

  printf("Informe o seu nome:\n");
  scanf("%[^\n]s", nome);

  printf("\n");
  iniciaisDoNome(nome, iniciais);
  printf("%s (%s)\n", nome, iniciais);

  return 0;
}
