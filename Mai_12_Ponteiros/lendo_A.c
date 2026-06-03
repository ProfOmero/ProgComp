#include <stdio.h>

int main() {
  int a;

  printf("a: ");
  scanf("%d", &a);

  printf("\n");
  printf("a = %d (endereco de 'a' = %x)\n", a, &a);

  return(0);
}
