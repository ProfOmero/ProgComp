#include <stdio.h>

void entrada(int *x, int tam) {
  int i;
  for(i=0; i<tam; i++) {
    printf("[na posicao %d] = ", i);
    scanf("%d", (x+i)); // usando aritmética de ponteiros
  }
  printf("\n");
}

void mostrar(int *x, int tam) {
  int i;
  printf("{ ");
  for(i=0; i<tam; i++) {
    printf("%d ", *(x+i)); // usando aritmética de ponteiros
  }
  printf("}\n");
}

int main() {
  #define n 7
  int a[n];

  entrada(a, n);
  mostrar(a, n);

  return(0);
}
