#include <stdio.h>

int main() {
  #define n 10
  int i, j;

  // ordem linear (vetor)
  for(i=0; i<n; i++) {
    printf("%d ", i);
  }

  printf("\n\n");

  // ordem matricial (matriz)
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
        printf("%d%d ", i, j);
    }
    printf("\n");
  }

  return(0);
}
