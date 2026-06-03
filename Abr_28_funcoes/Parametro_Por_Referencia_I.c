#include <stdio.h>

int somar_I(int a, int b) {
  return(a + b);
}

void somar_II(int a, int b, int *soma) {
  *soma = a + b;
}

int main() {
  printf("3 + 5 = %d\n\n", somar_I(3, 5));


  int sm;

  somar_II(3, 5, &sm);

  printf("3 + 5 = %d\n", sm);

  return(0);
}
