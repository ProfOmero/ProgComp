#include <stdio.h>

int main() {
  char a;

  printf("char: %d bytes, %d bytes\n", sizeof(char), sizeof(a));
  printf("int: %d bytes\n", sizeof(int));
  printf("float: %d bytes\n", sizeof(float));
  printf("double: %d bytes\n", sizeof(double));


  int b = 2147483658;
  printf("%d\n", b);
  return(0);
}
