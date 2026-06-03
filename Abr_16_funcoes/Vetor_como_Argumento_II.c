#include <stdio.h>

void entrada(int *x, int n);
int somar(int *x, int n);
float media(int *x, int n);
void mostrar(int *x, int n);

int main() {
  int a[5], b[7];

  entrada(a, 5);
  entrada(b, 7);

  mostrar(a, 5);
  mostrar(b, 7);

  return 0;
}

void entrada(int *x, int n) {
  int i;
  for(i=0; i<n; i++) {
    printf("posicao %d, valor: ", i);
    scanf("%d", &x[i]);
  }
  printf("\n");
}

int somar(int *x, int n) {
  int i, sm = 0;
  for(i=0; i<n; i++) {
    sm = sm + x[i];
  }
  return(sm);
}

float media(int *x, int n) {
  return(somar(x, n) / (float)n);
}

void mostrar(int *x, int n) {
  int i;

  printf("{ ");
  for(i=0; i<n; i++) {
    printf("%d ", x[i]);
  }
  printf("} soma = %d; media = %.2f\n", somar(x, n), media(x, n));
}
