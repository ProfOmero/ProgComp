#include <stdio.h>

int main() {
  int n;

  printf("n: ");
  scanf("%d", &n);

  printf("\n");

  if (n < 0) {
     printf("<<< NEGATIVO >>>\n\n");
  }

  if (n == 0) {
     printf("<<< NEUTRO >>>\n\n");
  }

  if (n > 0) {
     printf("<<< POSITIVO >>>\n\n");
  }

  printf("FIM DO PROGRAMA");
  return(0);
}
