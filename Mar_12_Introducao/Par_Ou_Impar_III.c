#include <stdio.h>

int main() {
  int n;

  printf("n: ");
  scanf("%d", &n);

  printf("\n");

  if ((n % 2) == 0)
     printf("%d <<< eh um nro par >>>\n", n);

  if ((n % 2) == 1)
     printf("%d <<< eh um nro impar >>>\n", n);

  printf("FIM DO PROGRAMA\n\n");

  system("PAUSE");

  return(0);
}
