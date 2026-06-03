#include <stdio.h>

void mostrar(int *x, int tam) {
  int i;
  for(i=0; i<(tam*tam); i++) {
    printf("%d (%x)  ", *(x+i), (x+i));
    if ((i % tam) == (tam-1)) {
        printf("\n");
    }
  }
}

int main() {
  #define n 3
  int m[n][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int i, j;

  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      printf("%d (%x)  ", m[i][j], &m[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  mostrar(m, n);

  return(0);
}
