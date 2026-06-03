#include <stdio.h>

void multiplicacao(int a, int b, int *result) {
  *result = a * b;
}

int main() {
  int mult;

  multiplicacao(5, 3, &mult);

  printf("5 x 3 = %d\n", mult);


  return(0);
}
