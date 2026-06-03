#include <stdio.h>
#include <stdlib.h> // para usar a função "malloc"

// alocação dinâmica de memória (em tempo de execução - Run Time)
int **criarMatriz(int nl, int nc) {
  int i;
  int **m;

  m = (int **)malloc(sizeof(int *) * nl);
  for(i=0; i<nl; i++) {
    m[i] = (int *)malloc(sizeof(int) * nc);
  }

  return(m);
}

void entrada(int **m, int nl, int nc) {
  int i, j;
  int *p;

  for(i=0; i<nl; i++) {
    p = m[i];
    for(j=0; j<nc; j++) {
      printf("[%d][%d] = ", i, j);
      scanf("%d", (p+j));
    }
    printf("\n");
  }
}

void mostrarMatriz(int **m, int nl, int nc) {
  int i, j;
  int *p;

  for(i=0; i<nl; i++) {
    p = m[i];
    for(j=0; j<nc; j++) {
      printf("%d (%x)  ", *(p+j), (p+j));
    }
    printf("\n");
  }
}

int main() {
  // alocação estática de memória (em tempo de projeto = compilação)
  #define nl 2
  #define nc 4
  int **m;

  m = criarMatriz(nl, nc);
  entrada(m, nl, nc);
  mostrarMatriz(m, nl, nc);

  return(0);
}
