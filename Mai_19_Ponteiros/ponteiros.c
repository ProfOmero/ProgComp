#include <stdio.h>

int main() {
  int a, b;

  a = 1;
  b = 111;

  int *p1, *p2;

  p1 = &a;
  p2 = &b;

  printf("a = %d, %d (endereco de 'a' = %x; valor em 'p1' = %x\n", a, *p1, &a, p1);
  printf("b = %d, %d (endereco de 'b' = %x; valor em 'p2' = %x\n", b, *p2, &b, p2);

  return(0);
}
