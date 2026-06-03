#include <stdio.h>

int main() {
  struct rgDados {
    int a;
    int b;
  };

  struct rgDados meusDados;

  printf("A: ");
  scanf("%d", &meusDados.a);

  printf("B: ");
  scanf("%d", &meusDados.b);

  int soma, mult;

  soma = meusDados.a + meusDados.b;
  mult = meusDados.a * meusDados.b;

  printf("\n");
  printf("%d + %d = %d\n", meusDados.a, meusDados.b, soma);
  printf("%d x %d = %d\n", meusDados.a, meusDados.b, mult);

  return 0;
}
