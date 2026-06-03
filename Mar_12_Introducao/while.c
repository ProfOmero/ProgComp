#include <stdio.h>

int main() {
  int i;    // variável de controle do laço (repetição)

  i = 0; // inicio
  while (i < 10) { // fim
    printf("%d ", i);
    i = i + 1; // passo             i++
  }
  printf("\n\n");

  i = 10;
  while (i <= 100) {
    printf("%d\n", i);
    i = i + 10;                 // i += 10
  }

  printf("\n");

  i = 10;
  while (i >= 1) {
    printf("%d ", i);
    i--;                        // i = i - 1
  }
  printf("\n\n");

  float j;

  j = 0.0;
  while (j <= 5.00) {
    printf("%.2f\n", j);
    j = j + 0.25;
  }
  printf("\n");

  return(0);
}
