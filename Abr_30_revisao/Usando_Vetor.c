#include <stdio.h>

void lerDados(int *x, int n) {
  int i;
  for(i=0; i<n; i++) {
    scanf("%d", &x[i]);
  }
}

void mostrarDados(int *x, int n) {
  int i;

  printf("{ ");
  for(i=0; i<n; i++) {
    printf("%d ", x[i]);
  }
  printf("}\n");
}

void processarDados(int *x, int *y, int n) {
  int i;
  for(i=0; i<n; i++) {
    if ((x[i] % 2) == 0)
        y[i] = 0;
    else y[i] = 1;
  }
}

int main() {
  int n;

  scanf("%d", &n);

  int a[n], b[n];

  lerDados(a, n);

  processarDados(a, b, n);

  mostrarDados(a, n);
  mostrarDados(b, n);

  return(0);
}
