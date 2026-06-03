#include <stdio.h>

int main() {
  int mes;

  do {
    printf("Informe o mes do ano? ");
    scanf("%d", &mes);
  } while ((mes < 1) || (mes > 12));

  switch (mes) {
    case 1:
      printf("<<< janeiro >>>");
      break;
    case 2:
      printf("<<< fevereiro >>>");
      break;
    case 3:
      printf("<<< março >>>");
      break;
    case 4:
      printf("<<< abril >>>");
      break;
    case 5:
      printf("<<< maio >>>");
      break;
    case 6:
      printf("<<< junho >>>");
      break;
    case 7:
      printf("<<< julho >>>");
      break;
    case 8:
      printf("<<< agosto >>>");
      break;
    case 9:
      printf("<<< setembro >>>");
      break;
    case 10:
      printf("<<< outubro >>>");
      break;
    case 11:
      printf("<<< novembro >>>");
      break;
    default:
      printf("<<< dezembro >>>");
  }
  return(0);
}
