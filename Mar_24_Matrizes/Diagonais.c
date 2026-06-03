#include <stdio.h>

int main() {
  #define n 9
  int m[n][n];
  int i, j, meio = n / 2;

  for(i=0; i<n; i++) {

    for(j=0; j<n; j++) {
      if ((i == meio) && (j == meio)) {
         m[i][j] = 9;
      }
      else if (i == j) { // diagonal principal
              m[i][j] = 1;
           }
           else if ((i+j) == (n-1)) { // diagonal secundária
                   m[i][j] = 2;
                }
                else {
                  m[i][j] = 0;
                }
    }

  }

  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  return(0);
}
