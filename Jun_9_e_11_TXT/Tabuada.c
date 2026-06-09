#include <stdio.h>

int main() {
  int i, n;

  FILE *arq;
  arq = fopen("tabuada.txt", "w");
  if (arq == NULL) {
     printf("Erro: arquivo 'tabuada.txt' não foi criado!!!\n");
     return(0);
  }


  printf("n: ");
  scanf("%d", &n);

  printf("\n");

  for(i=1; i<=10; i++) {
    printf("%d x %d = %d\n", n, i, (n*i));
    fprintf(arq, "%d x %d = %d\n", n, i, (n*i));
  }

  fclose(arq);

  return(0);
}
