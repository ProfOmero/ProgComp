#include <stdio.h>

void mostrar(int n) {
  int i;
  printf("{ ");
  for(i=1; i<=n; i++) {
    printf("%d", i);
    if (i != n) {
        printf(", ");
    }
  }
  printf(" } ");
}

int somar(int n) {
  int i, sm;
  sm = 0;
  for(i=1; i<=n; i++) {
    sm = sm + i;
  }
  return(sm);
}

int main() {
  mostrar(7);
  printf("soma = %d\n\n", somar(7));

  mostrar(10);
  printf("soma = %d\n\n", somar(10));

  return 0;
}
