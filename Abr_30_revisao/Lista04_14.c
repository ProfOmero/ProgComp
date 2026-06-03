#include <stdio.h>
#include <string.h>

int trocaEspaco(char* A, char* B) {
  int i = 0, n = strlen(A);
  int ct = 0;

  int inicio, fim;

  while (A[i] == ' ') {
    ct++;
    i++;
  }
  inicio = i;

  i = (n - 1); // posição do último caractere da string
  while (A[i] == ' ') {
    ct++;
    i--;
  }
  fim = i;

  int j = 0;

  for(i=inicio; i<=fim; i++) {
    if (A[i] != ' ') {
        B[j] = A[i];
        j++;
    }
    else {
        if (B[j-1] != ' ') {
            B[j] = ' ';
            j++;
        }
        else ct++;
    }
  }

  B[j] = '\0';
  return(ct);
}

int main() {
char str1[80]= {"oi   oi"};
char str2[80];
int n = trocaEspaco(str1,str2);
printf("%d\n%s\n%s\n",n,str1,str2);

}
