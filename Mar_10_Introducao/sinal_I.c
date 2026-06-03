#include <stdio.h>

int main() {
  int n;

  printf("n: ");
  scanf("%d", &n);

  if (n < 0) {
     printf("\n");
     printf("<<< NEGATIVO >>>\n\n");
     printf("FIM DO PROGRAMA");
  }

  if (n == 0) {
     printf("\n");
     printf("<<< NEUTRO >>>\n\n");
     printf("FIM DO PROGRAMA");
  }

  if (n > 0) {
     printf("\n");
     printf("<<< POSITIVO >>>\n\n");
     printf("FIM DO PROGRAMA");
  }

  return(0);
}
