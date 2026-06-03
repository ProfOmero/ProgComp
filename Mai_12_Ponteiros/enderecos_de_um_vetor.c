#include <stdio.h>

int main() {
  #define n 5
  int a[n];
  int i;

  for(i=0; i<n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  printf("\n");
  for(i=0; i<n; i++) {
    printf("a[%d] = %d (endereco = %x)\n", i, a[i], &a[i]);
  }

  printf("\n");
  printf("endereco de 'a' = %x\n", &a);
  printf("endereco de 'a[0]' = %x\n", &a[0]);

  return(0);
}
