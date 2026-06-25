#include <stdio.h>

void gravar() {
  FILE *arq;
  arq = fopen("numeros.txt", "w");
  if (arq == NULL) {
     printf("Arquivo {numeros.txt} não foi criado!!!\n");
     return(0);
  }

  int i, n, nro;

  printf("Quantos nros serão gravados? ");
  scanf("%d", &n);

  fprintf(arq, "%d\n", n);

  printf("\n");
  for(i=1; i<=n; i++) {
    printf("%do. número: ", i);
    scanf("%d", &nro);

    fprintf(arq, "%d\n", nro);
  }

  fclose(arq);
}

int main() {
  gravar();
  printf("<<< FIM DO PROGRAMA >>>\n");

  return(0);
}
