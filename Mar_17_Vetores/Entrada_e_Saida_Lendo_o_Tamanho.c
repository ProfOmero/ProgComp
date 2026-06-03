#include <stdio.h>

int main() {
  int n;            // tamanho do vetor
  printf("Informe o tamanho do vetor: ");
  scanf("%d", &n);

  int x[n];         // declaração do vetor (alocação de memória)
  int i;            // índice (ou posição) de um item no vetor

  printf("\n");
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
