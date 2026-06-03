#include <stdio.h>

int fatorial(int n) {
  int i, result = 1;
  for(i=1; i<=n; i++) {
    result = result * i;
  }
  return(result);
}

int main() {
  int n;

  for(n=0; n<=12; n++) {
    printf("%d! = %d\n", n, fatorial(n));
  }

  return 0;
}
