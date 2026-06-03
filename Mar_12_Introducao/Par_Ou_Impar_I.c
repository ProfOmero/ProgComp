#include <stdio.h>

int main() {
  int n;

  printf("n: ");
  scanf("%d", &n);

  if ((n % 2) == 0) {
     printf("\n");
     printf("%d <<< eh um nro par >>>\n", n);
     printf("FIM DO PROGRAMA\n\n");
  }

  if ((n % 2) == 1) {
     printf("\n");
     printf("%d <<< eh um nro impar >>>\n", n);
     printf("FIM DO PROGRAMA\n\n");
  }

  system("PAUSE");

  return(0);
}
