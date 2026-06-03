#include <stdio.h>

int fatorial(int n) {
  int i, f = 1;
  for(i=1; i<=n; i++) {
    f = f * i;
  }
  return(f);
}

int fatorial_recursivo(int n) {
  if (n == 0)
      return(1);
  else return(n * fatorial_recursivo(n-1));
}

int main() {
  printf("6! = %d\n\n", fatorial(6));
  printf("6! = %d\n", fatorial_recursivo(6));

  return(0);
}
