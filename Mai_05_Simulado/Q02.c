#include <stdio.h>

typedef struct {
    int a;
    int b;
    int c;
} rgDados;

void mostrarDados(rgDados x[], int tam) {
  int i;
  for(i=0; i<tam; i++) {
    printf("{ %d %d %d } ", x[i].a, x[i].b, x[i].c);

    if ((x[i].a == x[i].b) && (x[i].b == x[i].c))
       printf("iguais\n");
    else if ((x[i].a < x[i].b) && (x[i].b < x[i].c))
            printf("em ordem crescente\n");
         else if ((x[i].a == x[i].b) && (x[i].b < x[i].c))
                 printf("em ordem com empate no inicio\n");
              else if ((x[i].a < x[i].b) && (x[i].b == x[i].c))
                      printf("em ordem com empate no fim\n");
                   else printf("nao esta em ordem crescente\n");
  }
}

int main() {
  int i, n;

  scanf("%d", &n);

  rgDados nros[n];

  for(i=0; i<n; i++) {
    scanf("%d %d %d", &nros[i].a, &nros[i].b, &nros[i].c);
  }

  mostrarDados(nros, n);

  return(0);
}
