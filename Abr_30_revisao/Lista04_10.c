#include <stdio.h>

int ehPrimo(int num) {
  if ((num == 0) && (num == 1))
     return(0);
  else {
    int i, ctDiv = 0;
    for(i=1; i<=num; i++) {
      if ((num % i) == 0)
         ctDiv = ctDiv + 1;
    }

    if (ctDiv == 2)
        return(1);
    else return(0);
  }
}

int encontraPrimo(int *v, int n) {
  int i;
  for(i=0; i<n; i++) {
    if (ehPrimo(v[i]))
        return(i);
  }
  return(-1);
}

int main() {
int v[5] = {4,8,4,4,4};
int pos = encontraPrimo(v, 5);
if(pos == -1)
    printf("Sem primo\n");
else
    printf("Primo no indice: %d{%d eh primo}\n",pos,v[pos]);

}
