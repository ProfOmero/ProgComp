#include <stdio.h>

int main() {
  #define nl 4
  #define nc 2
  int m[nl][nc];
  int i, j, smLinha;

  for(i=0; i<nl; i++) {
    printf("%da. linha\n", (i+1));
    for(j=0; j<nc; j++) {
      printf("M[%d][%d] = ", i, j);
      scanf("%d", &m[i][j]);
    }
    printf("\n");
  }

  printf("M\n");
  for(i=0; i<nl; i++) {
    printf("| ");
    smLinha = 0;
    for(j=0; j<nc; j++) {
      printf("%d ", m[i][j]);
      smLinha = smLinha + m[i][j];
    }
    printf("| soma = %d\n", smLinha);
  }

  return(0);
}
