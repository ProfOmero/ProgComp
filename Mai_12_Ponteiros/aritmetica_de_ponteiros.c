#include <stdio.h>

int main() {
  #define n 5
  int a[n];
  int i;
  int *p; // variavel ponteiro que vai apontar para o vetor 'a'

  for(i=0; i<n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  p = &a; // a variável ponteiro 'p' aponta para o vetor 'a'

  printf("\n");
  for(i=0; i<n; i++) {
    printf("p[%d] = %d, %d, %d (endereco = %x, %x, %x)\n",
      i, p[i], a[i], *(p+i), &p[i], &a[i], (p+i));
  }

  printf("\n");
  printf("endereco de 'a' = %x\n", &a);
  printf("endereco armazenado na variavel ponteiro 'p' = %x\n", p);

  return(0);
}
