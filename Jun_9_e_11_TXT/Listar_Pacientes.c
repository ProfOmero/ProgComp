#include <stdio.h>

typedef struct {
  char nome[50];
  float pc;
  float alt;
} rgPaciente;

float calcularIMC(rgPaciente meuPaciente) {
  return(meuPaciente.pc / (meuPaciente.alt * meuPaciente.alt));
}

char *interpretarIMC(float vlrIMC) {
  if (vlrIMC < 18.5)
     return("Magreza");
  else if (vlrIMC < 25.0)
          return("Normal");
       else if (vlrIMC < 30.0)
               return("Sobrepeso");
            else if (vlrIMC < 35.0)
                    return("Obesidade grau I");
                 else if (vlrIMC < 40.0)
                         return("Obesidade grau II");
                      else return("Obesidade grau III");
}

char *toString(rgPaciente meuPaciente) {
   float vlrIMC = calcularIMC(meuPaciente);

   char *result = (char *)malloc(500);

   sprintf(result, "Nome do Paciente: %s\n"
                   "Peso Corporal...: %.3f kgs\n"
                   "Altura..........: %.2f metros\n"
                   "Valor do IMC....: %.2f (%s)\n",
                   meuPaciente.nome,
                   meuPaciente.pc,
                   meuPaciente.alt,
                   vlrIMC, interpretarIMC(vlrIMC));

   return(result);
}

int main() {
  rgPaciente meuPaciente;

  FILE *arq;
  arq = fopen("pacientes.txt", "r"); // r = read
  if (arq == NULL) {
     printf("Erro: arquivo 'pacientes.txt' não foi localizado!!!\n");
     return(0);
  }

  int ctPacientes = 0;

  while (fscanf(arq, "%[^\n]s", meuPaciente.nome) != EOF) {
    fscanf(arq, "%f; %f\n", &meuPaciente.pc, &meuPaciente.alt);

    ctPacientes++;
    printf("%do. paciente\n", ctPacientes);
    printf("%s\n", toString(meuPaciente));
  }

  fclose(arq);

  return(0);
}
