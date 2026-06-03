#include <stdio.h>
#include <string.h>

int main() {
  char s[100];

  printf("Informe uma String?\n");
  scanf("%[^\n]s", s);

  printf("\n");

  int i, n = strlen(s);
  for(i=0; i<n; i++) {
    printf("s[%d] = %c\n", i, s[i]);
  }

  return 0;
}
