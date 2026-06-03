#include <stdio.h>

int main() {
  int n;            // tamanho do vetor
  printf("Informe o tamanho do vetor: ");
  scanf("%d", &n);

  int x[n];         // declaração do vetor (alocação de memória)
  int i;            // índice (ou posição) de um item no vetor

  printf("\n");
  for(i=0; i<n; i++) {
    printf("%do. item de %d, x[%d] = ", (i+1), n, i);
    scanf("%d", &x[i]);
  }

  int soma = 0;
  int ctPares = 0;
  for(i=0; i<n; i++) {
    soma = soma + x[i];
    if ((x[i] % 2) == 0) {
        ctPares = ctPares + 1;
    }
  }

  float media = 0, porCemPares = 0;
  if (n != 0) {
     media = soma / (float)n;
     porCemPares = (ctPares / (float)n) * 100;
  }

  printf("\n");
  printf("x = { ");
  for(i=0; i<n; i++) {
    printf("%d", x[i]);
    if (i != (n-1)) {
        printf(", ");
    }
  }
  printf(" }\n\n");

  printf("Soma dos itens do vetor = %d\n", soma);
  printf("Valor medio dos itens do vetor = %.2f\n", media);
  printf("Qtde de nros pares no vetor = %d (%.2f%%)\n",
    ctPares, porCemPares);

  return(0);
}
