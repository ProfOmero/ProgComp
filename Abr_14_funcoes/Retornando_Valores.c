#include <stdio.h>

int dobro(int n) {
  int result;

  result = 2 * n;
  return(result);
}

int triplo(int n) {
  return(3 * n);
}

int main() {
  printf("O dobro de 5 e igual a %d.\n", dobro(5));
  printf("O triplo de 5 e igual a %d.\n\n", triplo(5));

  int n;
  printf("n: ");
  scanf("%d", &n);

  printf("\n");

  printf("O dobro de %d e igual a %d.\n", n, dobro(n));
  printf("O triplo de %d e igual a %d.\n\n", n, triplo(n));

  int x;
  x = dobro(5) + triplo(n);
  printf("Resultado e igual a %d.\n\n", x);

  x = dobro(dobro(triplo(2)));
  printf("Resultado e igual a %d.\n\n", x);

  x = dobro(5 + 3 - 1);
  printf("Resultado e igual a %d.\n\n", x);

  return 0;
}
