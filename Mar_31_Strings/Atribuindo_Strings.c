#include <stdio.h>
#include <string.h>

int main() {
  char s1[100] = "UTFPR - Curitiba/PR";
  char s2[100];

  strcpy(s2, "Pato Branco - PR");

  printf("%s\n", s1);
  printf("%s\n", s2);

  return 0;
}
