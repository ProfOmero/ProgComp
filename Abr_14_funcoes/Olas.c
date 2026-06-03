#include <stdio.h>

void ola() {
  printf("Olah!!!\n\n");
}

void digaOlaPara(char nome[100]) {
  printf("Olah, %s!!!\n", nome);
}

void boasVindas(char nome[100], char sexo) {
  if ((sexo == 'f') || (sexo == 'F'))
     printf("Seja bem-vinda Sra. %s!!!\n", nome);
  else printf("Seja bem-vindo Sr. %s!!!\n", nome);
}

int main() {
  ola();

  digaOlaPara("Juca");
  digaOlaPara("Joaquim");

  printf("\n");
  boasVindas("Juca Bala", 'M');
  boasVindas("Maria das Dores", 'F');

  return 0;
}
