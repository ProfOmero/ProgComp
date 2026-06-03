#include <stdio.h>
#include <string.h>

int main() {
  char s[100];

  printf("Informe uma String?\n");
  scanf("%[^\n]s", s);

  printf("\n");

  int i, n = strlen(s);
  int ctMaius = 0, ctMinus = 0, ctA = 0;
  for(i=0; i<n; i++) {
    if ((s[i] == 'a') || (s[i] == 'A')) {
        ctA = ctA + 1;
    }

    if ((s[i] >= 'A') && (s[i] <= 'Z')) {
        ctMaius = ctMaius + 1;
    }
    else if ((s[i] >= 'a') && (s[i] <= 'z')) {
            ctMinus += 1; // pode assim também
         }
  }

  printf("Encontramos\n");
  printf("Maiusculas....: %d\n", ctMaius);
  printf("Minusculas....: %d\n", ctMinus);
  printf("Caracteres 'A': %d\n", ctA);

  return 0;
}
