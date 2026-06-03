#include <stdio.h>

int main() {
  #define n 7       // tamanho do vetor
  int x[n];         // declaração do vetor (alocação de memória)
  int i;            // índice (ou posição) de um item no vetor

  for(i=0; i<n; i++) {
    printf("%do. item de %d, x[%d] = ", (i+1), n, i);
    scanf("%d", &x[i]);
  }

  printf("\n");
  printf("x = { ");
  for(i=0; i<n; i++) {
    printf("%d", x[i]);
    if (i != (n-1)) {
        printf(", ");
    }
  }
  printf(" }\n");

  return(0);
}
