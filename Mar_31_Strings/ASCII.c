#include <stdio.h>

int main() {
  printf("%d: %c\n", 'U', 'U');
  printf("%d: %c\n", 'u', 'u');
  printf("%d: %c\n\n", 65, 65);

  char maius[27];
  char minus[27];
  int i;
  for(i=0; i<26; i++) {
    maius[i] = 'A' + i;
    minus[i] = 'a' + i;
  }
  maius[i] = '\0';
  minus[i] = '\0';

  char j, nros[11];
  i = 0;
  for(j='0'; j<='9'; j++) {
    nros[i] = j;
    i += 1;
  }

  printf("%s\n", maius);
  printf("%s\n", minus);
  printf("%s\n", nros);

  return 0;
}
