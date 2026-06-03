#include <stdio.h>

int main() {
  typedef struct {
    int dia;
    int mes;
    int ano;
  } rgData;

  typedef struct {
    char nome[100];
    rgData dtNasc;  // data de nascimento
  } rgAmigo;

  int i, n;
  printf("Quantos Amigos? ");
  scanf("%d", &n);

  rgAmigo amigos[n];
  for(i=0; i<n; i++) {
    getchar();

    printf("\n");
    printf("%do. amigo\n", (i+1));

    printf("Nome..............: ");
    scanf("%[^\n]s", amigos[i].nome);

    printf("Data de Nascimento: ");
    scanf("%d/%d/%d", &amigos[i].dtNasc.dia,
                      &amigos[i].dtNasc.mes,
                      &amigos[i].dtNasc.ano);
  }

  system("cls");

  for(i=0; i<n; i++) {
    printf("%do. amigo\n", (i+1));
    printf("%s (%02d/%02d/%d)\n\n", amigos[i].nome,
                                    amigos[i].dtNasc.dia,
                                    amigos[i].dtNasc.mes,
                                    amigos[i].dtNasc.ano);
  }

  return 0;
}
