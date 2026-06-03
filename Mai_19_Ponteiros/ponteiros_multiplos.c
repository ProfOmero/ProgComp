#include <stdio.h>

int main() {
  int a;

  a = 1;

  int *p1;
  int **p2;
  int ***p3;

  p1 = &a;
  p2 = &p1;
  p3 = &p2;

  printf("a = %d, %d, %d, %d\n", a, *p1, **p2, ***p3);


  return(0);
}
