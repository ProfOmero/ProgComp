#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int a;
  int b;
} rgDados;

rgDados *entrada() {
  rgDados *result;

  result = (rgDados *)malloc(sizeof(rgDados));

  printf("a: ");
  scanf("%d", &result->a);

  printf("b: ");
  scanf("%d", &result->b);

  printf("\n");

  return(result);
}

void mostrarRegistro(rgDados x) {
  printf("{a = %d; b = %d}\n", x.a, x.b);
}

void mostrarPonteiroParaRegistro(rgDados *p) {
  printf("{a = %d; b = %d}\n", p->a, p->b);
}

int main() {
  rgDados *meusDados;

  meusDados = entrada();

  mostrarRegistro(*meusDados);
  mostrarPonteiroParaRegistro(meusDados);

  return(0);
}
