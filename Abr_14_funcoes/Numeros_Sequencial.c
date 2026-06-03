#include <stdio.h>

int main() {
  int i, n, sm;

  n = 7;
  printf("{ ");
  for(i=1; i<=n; i++) {
    printf("%d", i);
    if (i != n) {
        printf(", ");
    }
  }
  printf(" } ");

  sm = 0;
  for(i=1; i<=n; i++) {
    sm = sm + i;
  }
  printf("soma = %d\n\n", sm);

  n = 10;
  printf("{ ");
  for(i=1; i<=n; i++) {
    printf("%d", i);
    if (i != n) {
        printf(", ");
    }
  }
  printf(" } ");

  sm = 0;
  for(i=1; i<=n; i++) {
    sm = sm + i;
  }
  printf("soma = %d\n\n", sm);

  return 0;
}
