#include <stdio.h>

int main() {
  int a;
  int *p; // variável do tipo ponteiro
  printf("endereco da variavel ponteiro 'p' = %x\n\n", &p);

  printf("a: ");
  scanf("%d", &a);

  printf("(antes) a = %d (endereco de 'a' = %x)\n", a, &a);

  p = &a;
  printf("endereco armazenado na variavel ponteiro 'p' = %x\n", p);


  *p = 20;
  printf("(depois) a = %d, %d\n", a, *p);


  return(0);
}
