#include <stdio.h>
#include <stdlib.h>

int *carregar(int *tam) {
  FILE *arq;
  arq = fopen("numeros.txt", "r");
  if (arq == NULL) {
     printf("Arquivo {numeros.txt} não foi localizado!!!\n");
     return(0);
  }

  int *result;
  int i = 0, nro;

  fscanf(arq, "%d", tam); // lê a primeira linha do arquivo texto

  result = (int *)malloc(sizeof(int) * (*tam)); // alocação dinâmica de memória

  while (fscanf(arq, "%d", &nro) != EOF) {
    result[i] = nro;
    i++;
  }

  fclose(arq);

  return(result);
}

int somar(int *x, int tam) {
  int i, result = 0;
  for(i=0; i<tam; i++) {
    result = result + *(x+i); // equivale a fazer: x[i]
  }
  return(result);
}

int mostrar(int *x, int tam) {
  int i;

  printf("{");
  for(i=0; i<tam; i++) {
    printf(" %d", *(x+i)); // equivale a fazer: x[i]
    if (i != (tam-1)) { // não é o último item do vetor
        printf(",");
    }
  }
  printf("} soma = %d\n", somar(x, tam));
}

int main() {
  int *a, n;

  a = carregar(&n);

  mostrar(a, n);

  printf("<<< FIM DO PROGRAMA >>>\n");

  return(0);
}
