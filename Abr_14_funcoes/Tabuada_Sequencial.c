#include <stdio.h>

int main() {
  int i, n;

  n = 5;
  for(i=1; i<=10; i++) {
    printf("%d x %d = %d\n", n, i, (n*i));
  }
  printf("\n");

  n = 7;
  for(i=1; i<=10; i++) {
    printf("%d x %d = %d\n", n, i, (n*i));
  }
  printf("\n");

  n = 9;
  for(i=1; i<=10; i++) {
    printf("%d x %d = %d\n", n, i, (n*i));
  }
  printf("\n");

  return 0;
}
