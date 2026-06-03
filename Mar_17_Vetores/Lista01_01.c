#include <stdio.h>

int main() {
  #define n 6
  int x[n];
  int i;

  for(i=0; i<n; i++) {
    scanf("%d", &x[i]);
  }

  i = (n - 1); // posição do último item do vetor "x"
  while (i >= 0) {
    printf("%d ", x[i]);

    i = i - 1;
  }

  printf("\n");

  return(0);
}
