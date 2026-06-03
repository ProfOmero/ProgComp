#include <stdio.h>
#include <stdlib.h>

int *criarVetor(int tam) {
  int *x;

  x = (int *)malloc(sizeof(int) * tam);
  return(x);
}

void entrada(char *nome, int *x, int tam) {
  int i;
  for(i=0; i<tam; i++) {
    printf("%s[%d] = ", nome, i);
    scanf("%d", (x+i)); // igual fazendo: &x[i] => &a[i], &b[i]
  }
  printf("\n");
}

void saida(char *nome, int *x, int tam) {
  int i;
  printf("%s { ", nome);
  for(i=0; i<tam; i++) {
    printf("%d ", *(x+i)); // igual fazendo: x[i] => a[i], b[i]
  }
  printf("}\n\n");
}

int main() {
  // Alocação Estática (em tempo de projeto - compilação)
  #define n 5
  int a[n];
  int *b;

  entrada("Vetor A", a, n);
  saida("Vetor A", a, n);

  // Alocação Dinâmica de Memória (em tempo de execução - Run Time)
  b = criarVetor(7); // seria a mesma coisa que: int b[7];

  entrada("Vetor B", b, 7);
  saida("Vetor B", b, 7);

  free(b);

  return(0);
}
