#include <stdio.h>
#include <stdlib.h>

int *carregar(FILE *arq, int *tam) {
  int *result;
  int i = 0, nro;

  fscanf(arq, "%d", tam); // lê a primeira linha do arquivo texto

  result = (int *)malloc(sizeof(int) * (*tam)); // alocação dinâmica de memória

  while (fscanf(arq, "%d", &nro) != EOF) {
    result[i] = nro;
    i++;
  }

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
  FILE *arq;
  arq = fopen("numeros.txt", "r");
  if (arq == NULL) {
     printf("Arquivo {numeros.txt} não foi localizado!!!\n");
     return(0);
  }

  int *a, n;

  a = carregar(arq, &n);

  mostrar(a, n);

  fclose(arq);
  printf("<<< FIM DO PROGRAMA >>>\n");

  return(0);
}
