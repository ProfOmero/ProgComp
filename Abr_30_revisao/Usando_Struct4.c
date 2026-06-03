#include <stdio.h>

typedef struct {
  int a;
  int b;
} rgDados;

typedef struct {
  int soma;
  int mult;
  float media;
} rgOperacoes;

rgDados lerDados() {
  rgDados result;

  scanf("%d", &result.a);
  scanf("%d", &result.b);

  return(result);
}

rgOperacoes processarDados(rgDados x) {
  rgOperacoes result;

  result.soma = x.a + x.b;
  result.mult = x.a * x.b;
  result.media = (x.a + x.b) / 2.0;

  return(result);
}

void mostrarDados(rgDados x, rgOperacoes y) {
  printf("%d + %d = %d\n", x.a, x.b, y.soma);
  printf("%d x %d = %d\n", x.a, x.b, y.mult);
  printf("{%d, %d} Valor medio = %.2f\n", x.a, x.b, y.media);
}

int main() {
  rgDados meusDados;
  rgOperacoes minhasOperacoes;

  meusDados = lerDados();
  minhasOperacoes = processarDados(meusDados);
  mostrarDados(meusDados, minhasOperacoes);

  return(0);
}
