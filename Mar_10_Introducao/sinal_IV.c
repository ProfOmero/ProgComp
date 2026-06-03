#include <stdio.h>

int main() {
  int n;

  printf("n: ");
  scanf("%d", &n);

  printf("\n");

  if (n < 0)
     printf("<<< NEGATIVO >>>\n\n");
  else
     if (n == 0)
        printf("<<< NEUTRO >>>\n\n");
     else
        printf("<<< POSITIVO >>>\n\n");

  printf("FIM DO PROGRAMA");
  return(0);
}
