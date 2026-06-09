#include <stdio.h>

typedef struct {
  char nome[50];
  float pc;
  float alt;
} rgPaciente;

int main() {
  int i, n;

  rgPaciente meuPaciente;

  FILE *arq;
  arq = fopen("pacientes.txt", "a"); // a = append
  if (arq == NULL) {
     printf("Erro: arquivo 'pacientes.txt' não foi criado!!!\n");
     return(0);
  }

  printf("Quantos Pacientes? ");
  scanf("%d", &n);

  printf("\n");

  for(i=1; i<=n; i++) {
    printf("%do. paciente\n", i);

    getchar(); // limpa o buffer de entrada de dados

    printf("Nome do Paciente......: ");
    scanf("%[^\n]s", meuPaciente.nome);

    printf("Peso Corporal (em kgs): ");
    scanf("%f", &meuPaciente.pc);

    printf("Altura (em metros)....: ");
    scanf("%f", &meuPaciente.alt);

    printf("\n");

    fprintf(arq, "%s\n", meuPaciente.nome);
    fprintf(arq, "%f; %f\n", meuPaciente.pc, meuPaciente.alt);
  }

  fclose(arq);

  return(0);
}
