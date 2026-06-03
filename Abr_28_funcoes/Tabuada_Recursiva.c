#include <stdio.h>

void tabuada(int n) {
  int i;
  for(i=1; i<=10; i++) {
    printf("%d x %d = %d\n", n, i, (n*i));
  }
}

void tabuada_recursiva(int n, int i) {
  if (i <= 10) {
     printf("%d x %d = %d\n", n, i, (n*i));
     i++;
     tabuada_recursiva(n, i); // recursividade
  }
}

int main() {
  tabuada(7);
  printf("\n");
  tabuada_recursiva(7, 1);

  return(0);
}
