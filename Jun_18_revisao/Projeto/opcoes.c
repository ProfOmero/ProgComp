#include <stdio.h>

void cadastrar() {
  system("cls");

  FILE *arq;
  arq = fopen("numeros.txt", "w");
  if (arq == NULL) {
     printf("Arquivo {numeros.txt} não foi criado!!!\n");
     return(0);
  }

  int i, n, nro;

  printf("Quantos nros serão gravados? ");
  scanf("%d", &n);

  fprintf(arq, "%d\n", n);

  printf("\n");
  for(i=1; i<=n; i++) {
    printf("%do. número: ", i);
    scanf("%d", &nro);

    fprintf(arq, "%d\n", nro);
  }

  fclose(arq);
}

int mostrar(int *x, int tam) {
  system("cls");
  int i;

  printf("{");
  for(i=0; i<tam; i++) {
    printf(" %d", *(x+i)); // equivale a fazer: x[i]
    if (i != (tam-1)) { // não é o último item do vetor
        printf(",");
    }
  }
  printf("}\n");
}

int *carregar(int *tam) {
  FILE *arq;
  arq = fopen("numeros.txt", "r");
  if (arq == NULL) {
     printf("Arquivo {numeros.txt} não foi localizado!!!\n");
     system("pause");
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

void menor_maior(int *x, int tam) {
  mostrar(x, tam);

  if (tam != 0) {
      int i, menor = 0, maior = 0;
      for(i=1; i<tam; i++) {
        if (*(x+i) < x[menor])
            menor = i;
        else if (*(x+i) > x[maior])
                maior = i;
      }

      printf("\n");
      printf("Menor = %d\n", x[menor]);
      printf("Maior = %d\n", x[maior]);
  }
  system("pause");
}

void somatorio_media(int *x, int tam) {
  mostrar(x, tam);

  int i, soma = 0;
  for(i=0; i<tam; i++) {
    soma = soma + *(x+i); // equivale a fazer: x[i]
  }
  float media = 0.0;
  if (tam != 0) {
     media = soma / (float)tam;
  }

  printf("\n");
  printf("Somatório = %d\n", soma);
  printf("Média     = %.2f\n", media);
  system("pause");
}

void percentual(int *x, int tam) {
  mostrar(x, tam);

  int i, ctPares = 0, ctImpares = 0;
  for(i=0; i<tam; i++) {
    if ((*(x+i) % 2) == 0)
        ctPares++;
    else ctImpares++;
  }

  float pPares = 0, pImpares = 0;
  if (tam != 0) {
     pPares = (ctPares / (float)tam) * 100;
     pImpares = 100 - pPares;
  }

  printf("\n");
  printf("Pares   = %d (%.2f%%)\n", ctPares, pPares);
  printf("Ímpares = %d (%.2f%%)\n", ctImpares, pImpares);

  system("pause");
}
