#include <stdio.h>

int main() {
  char nome[50];
  char sexo;
  int idade;
  float salario;

  printf("Nome......: ");
  scanf("%[^\n]s", nome);

  getchar(); // limpar o buffer de entrada de dados

  printf("Sexo (M/F): ");
  scanf("%c", &sexo);

  printf("Idade.....: ");
  scanf("%d", &idade);

  printf("Salario...: ");
  scanf("%f", &salario);

  printf("\n");
  if ((sexo == 'm') || (sexo == 'M'))
     printf("%s: homem, com %d anos e salario R$ %.2f\n",
        nome, idade, salario);
  else
     printf("%s: mulher, com %d anos e salario R$ %.2f\n",
        nome, idade, salario);

  return 0;
}
