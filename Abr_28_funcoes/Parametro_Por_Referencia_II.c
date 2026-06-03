#include <stdio.h>

int maior_I(int a, int b) {
  if (a >= b)
     return(a);
  else return(b);
}

void maior_II(int a, int b, int *max) {
  if (a >= b)
     *max = a;
  else *max = b;
}

void maior_e_menor(int a, int b, int *min, int *max) {
  if (a >= b) {
     *min = b;
     *max = a;
  }
  else {
    *min = a;
    *max = b;
  }
}

int main() {
  printf("{1, 10}; maior = %d\n\n", maior_I(1, 10));

  int maiorValor;

  maior_II(1, 10, &maiorValor);
  printf("{1, 10}; maior = %d\n\n", maiorValor);

  int menorValor;

  maior_e_menor(1, 10, &menorValor, &maiorValor);
  printf("{1, 10}; menor = %d, maior = %d\n\n", menorValor, maiorValor);

  return(0);
}
