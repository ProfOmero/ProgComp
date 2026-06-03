#include <stdio.h>

int main() {
  typedef struct {
    int dia;
    int mes;
    int ano;
  } rgData;

  rgData hoje = {7, 4, 2026};

  printf("Hoje eh %02d/%02d/%d.\n", hoje.dia, hoje.mes, hoje.ano);

  return 0;
}
