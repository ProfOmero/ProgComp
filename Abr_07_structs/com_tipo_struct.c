#include <stdio.h>

int main() {
  struct rgPessoa {
      char nome[50];    // campo 'nome' do registro 'rgPessoa'
      char sexo;
      int idade;
      float salario;
  };

  struct rgPessoa eu;

  printf("Nome......: ");
  scanf("%[^\n]s", eu.nome);

  getchar(); // limpar o buffer de entrada de dados

  printf("Sexo (M/F): ");
  scanf("%c", &eu.sexo);

  printf("Idade.....: ");
  scanf("%d", &eu.idade);

  printf("Salario...: ");
  scanf("%f", &eu.salario);

  printf("\n");
  if ((eu.sexo == 'm') || (eu.sexo == 'M'))
     printf("%s: homem, com %d anos e salario R$ %.2f\n",
        eu.nome, eu.idade, eu.salario);
  else
     printf("%s: mulher, com %d anos e salario R$ %.2f\n",
        eu.nome, eu.idade, eu.salario);

  return 0;
}
