#include <stdio.h>

int main() {
  char nomeArq[100], linha[100];

  printf("Nome do Arquivo TXT: ");
  scanf("%[^\n]s", nomeArq);


  FILE *arq;
  arq = fopen(nomeArq, "r"); // r = read
  if (arq == NULL) {
     printf("Erro: arquivo '%s' não foi localizado!!!\n", nomeArq);
     return(0);
  }

  printf("\n");
  printf("Conteudo do arquivo:\n");
  int ctLin = 0;

  while (fgets(linha, 100, arq) != NULL) {
    ctLin++;
    printf("%d: %s", ctLin, linha);
  }

  fclose(arq);

  return(0);
}
