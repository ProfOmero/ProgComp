#include <stdio.h>

int main() {
  int mes;

  do {
    printf("Informe o mes do ano? ");
    scanf("%d", &mes);
  } while ((mes < 1) || (mes > 12));

  char meses[13][10] = {"" ,"janeiro", "fevereiro", "março", "abril", "maio",
                        "junho", "julho", "agosto", "setembro", "outubro",
                        "novembro", "dezembro"};

  printf("<<< %s >>>", meses[mes]);

  return(0);
}
