#include <stdio.h>

void tabuada(int n) {
  int i;
  for(i=1; i<=10; i++) {
    printf("%d x %d = %d\n", n, i, (n*i));
  }
  printf("\n");
}

int main() {
  tabuada(5);
  tabuada(7);
  tabuada(9);

  return 0;
}
