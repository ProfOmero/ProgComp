#include <stdio.h>

int main() {
  #define n 10
  int x[n] = {30, 10, 60, 90, 20, 100, 80, 40, 70, 50};
  int i, j, min, aux;

  for(i=0; i<(n-1); i++) {
      min = i;
      for(j=(i+1); j<n; j++) {
        if (x[j] < x[min]) {
            min = j;
        }
      }
      aux = x[i];
      x[i] = x[min];
      x[min] = aux;
  }

  printf("x = {");
  for(i=0; i<n; i++) {
    printf("%d", x[i]);
    if (i != (n-1)) {
        printf(", ");
    }
  }
  printf("}");
  return(0);
}
