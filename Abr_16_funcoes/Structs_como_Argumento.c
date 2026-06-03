#include <stdio.h>

typedef struct {
  int a;
  int b;
} rgDados;

rgDados swap(rgDados x) {
  int aux;

  aux = x.a;
  x.a = x.b;
  x.b = aux;

  return(x);
}

void mostrar(char *dsc, rgDados x) {
  printf("%s: a = %d; b = %d.\n", dsc, x.a, x.b);
}


int main() {
  rgDados meusDados;

  printf("campo 'a': ");
  scanf("%d", &meusDados.a);

  printf("campo 'b': ");
  scanf("%d", &meusDados.b);

  mostrar("\nAntes da Troca.", meusDados);
  meusDados = swap(meusDados);
  mostrar("Depois da Troca", meusDados);

  return 0;
}
