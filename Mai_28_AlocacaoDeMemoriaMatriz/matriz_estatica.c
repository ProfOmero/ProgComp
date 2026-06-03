#include <stdio.h>

void mostrarMatriz(int *x, int nl, int nc) {
  int i, j;
  for(i=0; i<(nl*nc); i++) {
    printf("%d (%x)  ", *(x+i), (x+i));
    if ((i % nc) == (nc - 1)) {
       printf("\n");
    }
  }
}

int main() {
  // alocação estática de memória (em tempo de projeto = compilação)
  #define nl 2
  #define nc 4
  int m[nl][nc] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
  int i, j;

  for(i=0; i<nl; i++) {
    for(j=0; j<nc; j++) {
      printf("%d (%x)  ", m[i][j], &m[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  printf("%x, %x\n\n", &m, &m[0][0]);
  mostrarMatriz(m, nl, nc);

  return(0);
}
