#include <stdio.h>
#include <stdlib.h>

int main() {
  // Alocação Estática (em tempo de projeto - compilação)
  int a;
  int *p1, *p2;

  p1 = &a; // p1 recebe o endereço da variável simples 'a'

  printf("1o. valor: ");
  scanf("%d", p1);

  printf("\n");
  printf("a = %d (endereco de 'a' = %x)\n", a, &a);
  printf("p1 = %x (valor neste endereco = %d)\n\n\n", p1, *p1);


  // Alocação Dinâmica (em tempo de execução - Run Time)
  p2 = (int *)malloc(sizeof(int));

  printf("2o. valor: ");
  scanf("%d", p2);

  printf("p2 = %x (valor neste endereco = %d)\n", p2, *p2);

  free(p2);

  return(0);
}
