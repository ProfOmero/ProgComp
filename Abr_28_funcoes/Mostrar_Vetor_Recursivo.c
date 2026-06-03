#include <stdio.h>

void mostrar(int *x, int n) {
  int i;
  printf("{ ");
  for(i=0; i<n; i++) {
    printf("%d ", x[i]);
  }
  printf("}\n");
}

void mostrar_recursivo(int *x, int n, int i) {
  if (i < n) {
     if (i == 0)
        printf("{ ");

     printf("%d ", x[i]);
     i++;
     mostrar_recursivo(x, n, i);

     if (i == (n-1))
        printf("}");
  }
}


int main() {
  int a[7] = {1, 2, 3, 4, 5, 6, 7};

  mostrar(a, 7);
  mostrar_recursivo(a, 7, 0);

  return(0);
}
