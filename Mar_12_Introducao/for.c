#include <stdio.h>

int main() {
  int i;    // variável de controle do laço (repetição)

  for (i=0; i<10; i++) {
    printf("%d ", i);
  }
  printf("\n\n");

  for(i=10; i<=100; i+=10) {
    printf("%d\n", i);
  }

  printf("\n");

  for (i=10; i>=1; i--) {
    printf("%d ", i);
  }
  printf("\n\n");

  float j;

  for(j=0.0; j<=5.00; j+=0.25) {
    printf("%.2f\n", j);
  }
  printf("\n");

  return(0);
}
