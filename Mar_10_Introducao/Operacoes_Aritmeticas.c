#include <stdio.h>

int main() {
  int a, b, soma, sub, mult, divInt;
  float divReal;

  printf("a: ");
  scanf("%d", &a);

  printf("b: ");
  scanf("%d", &b);

  soma = a + b;
  sub = a - b;
  mult = a * b;
  divInt = a / b;
  divReal = (float)a / b;

  printf("\n");
  printf("%d + %d = %d\n", a, b, soma);
  printf("%d - %d = %d\n", a, b, sub);
  printf("%d * %d = %d\n", a, b, mult);
  printf("%d / %d = %d (divisao inteira)\n", a, b, divInt);
  printf("%d / %d = %.2f (divisao real)\n", a, b, divReal);

  return(0);
}
