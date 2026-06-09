#include <stdio.h>

int main() {
  int i, j, n;

  FILE *arq;
  arq = fopen("matriz.txt", "w");
  if (arq == NULL) {
     printf("Erro: arquivo 'matriz.txt' não foi criado!!!\n");
     return(0);
  }

  printf("tamanho da matriz: ");
  scanf("%d", &n);

  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      // primeira linha ou última linha
      if ((i == 0) || (i == (n-1)))
         fprintf(arq, "* ");
      // primeira coluna ou última coluna
      else if ((j == 0) || (j == (n-1)))
              fprintf(arq, "* ");
      // região central da matriz
           else fprintf(arq, "@ ");
    }
    fprintf(arq, "\n");
  }

  fclose(arq);

  return(0);
}
