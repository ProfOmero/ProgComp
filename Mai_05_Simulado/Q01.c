#include <stdio.h>
#include <string.h>

int numero_pessoas(void) {
  int n;
  scanf("%d", &n);
  return(n);
}

void le_nomes_da_pessoa(char *nome_pessoa){
  scanf("%[^\n]s", nome_pessoa);
}

void separa_nomes(char *nome_pessoa){
  int i, n = strlen(nome_pessoa);

  printf("%c", nome_pessoa[0]);
  for(i=1; i<n; i++) {
    if ((nome_pessoa[i] >= 'A') && (nome_pessoa[i] <= 'Z') &&
        (nome_pessoa[i-1] != ' ')) {
       printf(" ");
    }
    printf("%c", nome_pessoa[i]);
  }
  printf("\n");
}

int main() {
  int i, n;
  char nome_pessoa[200];

  n = numero_pessoas();

  for(i=0; i<n; i++) {
    getchar();
    le_nomes_da_pessoa(nome_pessoa);
    separa_nomes(nome_pessoa);
  }

  return(0);
}
